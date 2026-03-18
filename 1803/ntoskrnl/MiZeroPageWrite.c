/*
 * XREFs of MiZeroPageWrite @ 0x1400990E8
 * Callers:
 *     MmZeroPageWrite @ 0x140099068 (MmZeroPageWrite.c)
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiIsRetryIoStatus @ 0x140135210 (MiIsRetryIoStatus.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiRetardMdl @ 0x140253D5C (MiRetardMdl.c)
 */

__int64 __fastcall MiZeroPageWrite(struct _FILE_OBJECT *a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r14
  _QWORD *v5; // r10
  struct _FILE_OBJECT *v6; // r11
  __int64 v7; // rdi
  struct _MDL *p_MemoryDescriptorList; // rbx
  unsigned __int64 v9; // rdi
  CSHORT MdlFlags; // r12
  CSHORT v11; // r12
  struct _MDL *v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r13
  struct _MDL *v17; // rcx
  __int64 v18; // rdx
  NTSTATUS v19; // r15d
  CSHORT v20; // ax
  PMDL Mdl; // rax
  int v23; // [rsp+40h] [rbp-C0h]
  __int16 v24; // [rsp+48h] [rbp-B8h]
  __int16 Object; // [rsp+58h] [rbp-A8h] BYREF
  char v27; // [rsp+5Ah] [rbp-A6h]
  int v28; // [rsp+5Ch] [rbp-A4h]
  _QWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _FILE_OBJECT *v30; // [rsp+70h] [rbp-90h]
  NTSTATUS v31; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h]
  struct _MDL MemoryDescriptorList; // [rsp+90h] [rbp-70h] BYREF

  v24 = a3;
  v4 = ((unsigned __int64)a3 + 4095) >> 12;
  v5 = a2;
  v30 = a1;
  v6 = a1;
  v7 = a3;
  p_MemoryDescriptorList = 0LL;
  if ( a4 && a3 > a4 )
    v7 = a4;
  if ( (unsigned int)v7 > 0x10000 )
  {
    Mdl = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
    LOWORD(a3) = v24;
    p_MemoryDescriptorList = Mdl;
    v5 = a2;
    v6 = v30;
  }
  v9 = (unsigned __int64)(v7 + 4095) >> 12;
  if ( p_MemoryDescriptorList )
  {
    MdlFlags = p_MemoryDescriptorList->MdlFlags;
  }
  else
  {
    MdlFlags = 0;
    p_MemoryDescriptorList = &MemoryDescriptorList;
    if ( (unsigned int)v9 > 0x10 )
      LODWORD(v9) = 16;
  }
  v23 = 0;
  v11 = MdlFlags | 0x4002;
  v12 = p_MemoryDescriptorList + 1;
  LODWORD(v13) = v9;
  do
  {
    v14 = v4;
    if ( (unsigned int)v13 <= (unsigned int)v4 )
      v14 = v13;
    v13 = v14;
    v15 = v14 << 12;
    if ( (_DWORD)v4 == (_DWORD)v13 )
    {
      LODWORD(v9) = v4;
      if ( (a3 & 0xFFF) != 0 )
        v15 = (a3 & 0xFFF | (unsigned int)v15) - 4096;
    }
    v16 = (unsigned int)v15;
    v17 = v12;
    p_MemoryDescriptorList->Next = 0LL;
    p_MemoryDescriptorList->StartVa = 0LL;
    p_MemoryDescriptorList->Size = 8 * (((unsigned __int64)(v15 + 4095) >> 12) + 6);
    *(_QWORD *)&p_MemoryDescriptorList->ByteCount = (unsigned int)v15;
    p_MemoryDescriptorList->MdlFlags = v11;
    if ( (_DWORD)v13 )
    {
      v18 = v13;
      do
      {
        v17->Next = (struct _MDL *)qword_1403CC420;
        v17 = (struct _MDL *)((char *)v17 + 8);
        --v18;
      }
      while ( v18 );
    }
    Object = 0;
    v29[1] = v29;
    v27 = 6;
    v29[0] = v29;
    v28 = 0;
    v31 = 0;
    v32 = 0LL;
    v19 = IoSynchronousPageWriteEx(v6, (__int64)p_MemoryDescriptorList, v5, (__int64)&Object, 0, 0LL, (__int64)&v31);
    if ( v19 >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      v19 = v31;
    }
    v20 = p_MemoryDescriptorList->MdlFlags;
    if ( (v20 & 0x200) != 0 )
    {
      MiRetardMdl(p_MemoryDescriptorList);
      v20 = p_MemoryDescriptorList->MdlFlags;
    }
    if ( (v20 & 1) != 0 )
      MmUnmapLockedPages(p_MemoryDescriptorList->MappedSystemVa, p_MemoryDescriptorList);
    if ( v19 >= 0 )
    {
      v5 = a2;
      LODWORD(v4) = v4 - v13;
      *a2 += v16;
      if ( v23 )
      {
        --v23;
      }
      else if ( (unsigned int)v13 < (unsigned int)v9 )
      {
        LODWORD(v13) = v9;
      }
      goto LABEL_24;
    }
    v23 = 8;
    if ( !(unsigned int)MiIsRetryIoStatus((unsigned int)v19, v16) || (_DWORD)v13 == 1 )
      break;
    v5 = a2;
    LODWORD(v13) = (unsigned int)v13 >> 1;
LABEL_24:
    LOWORD(a3) = v24;
    v12 = p_MemoryDescriptorList + 1;
    v6 = v30;
  }
  while ( (_DWORD)v4 );
  if ( p_MemoryDescriptorList != &MemoryDescriptorList )
    IoFreeMdl(p_MemoryDescriptorList);
  return (unsigned int)v19;
}
