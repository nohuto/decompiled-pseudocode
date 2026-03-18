/*
 * XREFs of MiZeroPageWrite @ 0x14011F014
 * Callers:
 *     MmZeroPageWrite @ 0x14011EF98 (MmZeroPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
 *     MiIsRetryIoStatus @ 0x140124FC0 (MiIsRetryIoStatus.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiRetardMdl @ 0x140215E5C (MiRetardMdl.c)
 */

__int64 __fastcall MiZeroPageWrite(struct _FILE_OBJECT *a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r14
  _QWORD *v5; // r10
  struct _FILE_OBJECT *v6; // r11
  __int64 v7; // rdi
  struct _MDL *p_Mdl; // rbx
  unsigned __int64 v9; // rdi
  CSHORT MdlFlags; // r12
  CSHORT v11; // r12
  struct _MDL *v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // r13
  struct _MDL *v16; // rcx
  __int64 v17; // rdx
  NTSTATUS v18; // r15d
  PMDL v20; // rax
  int v21; // [rsp+40h] [rbp-C0h]
  __int16 v22; // [rsp+44h] [rbp-BCh]
  __int16 Object; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+52h] [rbp-AEh]
  int v26; // [rsp+54h] [rbp-ACh]
  _QWORD v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _FILE_OBJECT *v28; // [rsp+68h] [rbp-98h]
  NTSTATUS v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  struct _MDL Mdl; // [rsp+80h] [rbp-80h] BYREF

  v22 = a3;
  v4 = ((unsigned __int64)a3 + 4095) >> 12;
  v5 = a2;
  v28 = a1;
  v6 = a1;
  v7 = a3;
  p_Mdl = 0LL;
  if ( a4 && a3 > a4 )
    v7 = a4;
  if ( (unsigned int)v7 > 0x10000 )
  {
    v20 = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
    LOWORD(a3) = v22;
    p_Mdl = v20;
    v5 = a2;
    v6 = v28;
  }
  v9 = (unsigned __int64)(v7 + 4095) >> 12;
  if ( p_Mdl )
  {
    MdlFlags = p_Mdl->MdlFlags;
  }
  else
  {
    MdlFlags = 0;
    p_Mdl = &Mdl;
    if ( (unsigned int)v9 > 0x10 )
      LODWORD(v9) = 16;
  }
  v21 = 0;
  v11 = MdlFlags | 0x4002;
  v12 = p_Mdl + 1;
  v13 = v9;
  do
  {
    if ( v13 > (unsigned int)v4 )
      v13 = v4;
    v14 = v13 << 12;
    if ( (_DWORD)v4 == v13 )
    {
      LODWORD(v9) = v4;
      if ( (a3 & 0xFFF) != 0 )
        v14 = (a3 & 0xFFF | (unsigned int)v14) - 4096;
    }
    v15 = (unsigned int)v14;
    v16 = v12;
    p_Mdl->Next = 0LL;
    p_Mdl->StartVa = 0LL;
    p_Mdl->Size = 8 * (((unsigned __int64)(v14 + 4095) >> 12) + 6);
    *(_QWORD *)&p_Mdl->ByteCount = (unsigned int)v14;
    p_Mdl->MdlFlags = v11;
    if ( v13 )
    {
      v17 = v13;
      do
      {
        v16->Next = (struct _MDL *)qword_1403891A0;
        v16 = (struct _MDL *)((char *)v16 + 8);
        --v17;
      }
      while ( v17 );
    }
    Object = 0;
    v27[1] = v27;
    v25 = 6;
    v27[0] = v27;
    v26 = 0;
    v29 = 0;
    v30 = 0LL;
    v18 = IoSynchronousPageWriteEx(v6, (__int64)p_Mdl, v5, (__int64)&Object, 0, 0LL, (__int64)&v29);
    if ( v18 >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      v18 = v29;
    }
    if ( (p_Mdl->MdlFlags & 0x200) != 0 )
      MiRetardMdl(p_Mdl);
    if ( (p_Mdl->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(p_Mdl->MappedSystemVa, p_Mdl);
    if ( v18 >= 0 )
    {
      v5 = a2;
      LODWORD(v4) = v4 - v13;
      *a2 += v15;
      if ( v21 )
      {
        --v21;
      }
      else if ( v13 < (unsigned int)v9 )
      {
        v13 = v9;
      }
      goto LABEL_26;
    }
    v21 = 8;
    if ( !(unsigned int)MiIsRetryIoStatus((unsigned int)v18, v15) || v13 == 1 )
      break;
    v5 = a2;
    v13 >>= 1;
LABEL_26:
    LOWORD(a3) = v22;
    v12 = p_Mdl + 1;
    v6 = v28;
  }
  while ( (_DWORD)v4 );
  if ( p_Mdl != &Mdl )
    IoFreeMdl(p_Mdl);
  return (unsigned int)v18;
}
