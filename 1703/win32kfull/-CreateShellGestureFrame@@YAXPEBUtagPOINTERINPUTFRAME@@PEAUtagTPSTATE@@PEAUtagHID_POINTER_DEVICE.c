/*
 * XREFs of ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AA7D8
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     CopyTPPointerInputFrame @ 0x1C019A718 (CopyTPPointerInputFrame.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01AA710 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AB0A4 (-FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUta.c)
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AB15C (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AB2AC (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     GetPTPShellListener @ 0x1C01B0B78 (GetPTPShellListener.c)
 */

void __fastcall CreateShellGestureFrame(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        unsigned __int64 a4)
{
  unsigned int v8; // edi
  _QWORD *v9; // rsi
  unsigned int *v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  struct tagHID_POINTER_DEVICE_INFO *v13; // r8
  unsigned __int16 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  struct tagPOINTERINFONODE *v17; // rax
  struct tagPOINTERINFONODE *v18; // rbp
  unsigned int v19; // r14d
  __int64 i; // rdi
  unsigned __int16 v21; // ax
  __int64 v22; // rax

  v8 = 0;
  if ( *((_QWORD *)a2 + 239) )
    CleanupGestureCache(a2);
  EtwTraceCopyPointerInputFrameStart();
  v9 = CopyTPPointerInputFrame(a1, a4);
  EtwTraceCopyPointerInputFrameStop();
  if ( !v9 )
    goto LABEL_38;
  *((_QWORD *)a2 + 239) = v9;
  v10 = (unsigned int *)((char *)a2 + 128);
  v11 = 6LL;
  do
  {
    v12 = v10[34];
    if ( (v12 & 1) != 0 && (v12 & 0x80u) == 0 )
    {
      if ( v8 )
      {
        if ( v8 >= *v10 )
          v8 = *v10;
      }
      else
      {
        v8 = *v10;
      }
    }
    v10 += 68;
    --v11;
  }
  while ( v11 );
  if ( v8 == *((_DWORD *)a1 + 8) )
    goto LABEL_38;
  v13 = 0LL;
  if ( *((_DWORD *)v9 + 10) )
  {
    v14 = (unsigned __int16 *)(v9[11] + 48LL);
    do
    {
      if ( *v14 )
      {
        v15 = 272LL * ((unsigned int)*v14 % *((_DWORD *)a2 + 411));
        if ( (*(_DWORD *)((char *)a2 + v15 + 264) & 0x80u) != 0 )
        {
          *((_DWORD *)v14 + 5) = 0;
        }
        else
        {
          *((_QWORD *)v14 + 6) = *(_QWORD *)((char *)a2 + v15);
          *((_DWORD *)v14 + 18) = *(_DWORD *)((char *)a2 + v15 + 104);
          v16 = *(_QWORD *)((char *)a2 + v15 + 56);
          *((_DWORD *)v14 + 5) &= ~0x40000u;
          *((_QWORD *)v14 + 11) = v16;
          *(_DWORD *)((char *)a2 + v15 + 264) = *(_DWORD *)((_BYTE *)a2 + v15 + 264) & 0xFFFFFBFD | 2;
        }
      }
      v14 += 108;
      v13 = (struct tagHID_POINTER_DEVICE_INFO *)(unsigned int)((_DWORD)v13 + 1);
    }
    while ( (unsigned int)v13 < *((_DWORD *)v9 + 10) );
  }
  *((_DWORD *)v9 + 8) = v8;
  v17 = FindOrAssignPrimary((const struct tagPOINTERINPUTFRAME *)v9, a2, v13);
  v18 = v17;
  if ( v17 )
  {
    if ( (*((_DWORD *)a2 + 480) & 0x400) != 0 )
      *((_DWORD *)v17 + 17) |= 0x2000u;
    FixupPrimaryGestureContact(v17, (unsigned int)*((unsigned __int16 *)v17 + 24) % *((_DWORD *)a2 + 411), a2, a3, 1);
    v19 = 0;
    for ( i = v9[11]; v19 < *((_DWORD *)v9 + 10); ++v19 )
    {
      v21 = *(_WORD *)(i + 48);
      if ( v21 && (*((_DWORD *)a2 + 68 * ((unsigned int)v21 % *((_DWORD *)a2 + 411)) + 66) & 0x80u) == 0 )
      {
        if ( (struct tagPOINTERINFONODE *)i != v18 )
          FixupSecondaryGestureContacts(
            (struct tagPOINTERINFONODE *)i,
            (unsigned int)v21 % *((_DWORD *)a2 + 411),
            a2,
            a3,
            1);
        if ( GetPTPShellListener() )
          v22 = *(_QWORD *)GetPTPShellListener();
        else
          v22 = 0LL;
        *(_QWORD *)(i + 24) = v22;
      }
      i += 216LL;
    }
  }
  else
  {
LABEL_38:
    if ( *((_QWORD *)a2 + 239) )
      CleanupGestureCache(a2);
  }
}
