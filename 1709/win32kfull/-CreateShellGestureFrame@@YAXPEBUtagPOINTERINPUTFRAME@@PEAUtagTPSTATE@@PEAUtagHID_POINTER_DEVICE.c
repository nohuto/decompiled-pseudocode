/*
 * XREFs of ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01ADB8C
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     CopyTPPointerInputFrame @ 0x1C01A6348 (CopyTPPointerInputFrame.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01ADA40 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AE464 (-FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUta.c)
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE51C (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE66C (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     GetPTPShellListener @ 0x1C01B3F70 (GetPTPShellListener.c)
 */

void __fastcall CreateShellGestureFrame(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        unsigned __int64 a4)
{
  unsigned int v8; // edi
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // rax
  struct tagPOINTERINFONODE *v19; // rax
  struct tagPOINTERINFONODE *v20; // rbp
  unsigned int v21; // r14d
  __int64 i; // rdi
  unsigned __int16 v23; // ax
  __int64 v24; // rax

  v8 = 0;
  if ( *((_QWORD *)a2 + 239) )
    CleanupGestureCache(a2, (__int64)a2, (__int64)a3);
  EtwTraceCopyPointerInputFrameStart();
  v9 = CopyTPPointerInputFrame(a1, a4);
  EtwTraceCopyPointerInputFrameStop();
  if ( !v9 )
    goto LABEL_38;
  *((_QWORD *)a2 + 239) = v9;
  v12 = (unsigned int *)((char *)a2 + 128);
  v10 = 6LL;
  do
  {
    v13 = v12[34];
    if ( (v13 & 1) != 0 && (v13 & 0x80u) == 0 )
    {
      if ( v8 )
      {
        if ( v8 >= *v12 )
          v8 = *v12;
      }
      else
      {
        v8 = *v12;
      }
    }
    v12 += 68;
    --v10;
  }
  while ( v10 );
  if ( v8 == *((_DWORD *)a1 + 8) )
    goto LABEL_38;
  v14 = 0;
  v15 = v9[11];
  if ( *((_DWORD *)v9 + 10) )
  {
    v15 += 96LL;
    do
    {
      v16 = *(_WORD *)(v15 - 48);
      if ( v16 )
      {
        v17 = 272LL * ((unsigned int)v16 % *((_DWORD *)a2 + 411));
        if ( (*(_DWORD *)((char *)a2 + v17 + 264) & 0x80u) != 0 )
        {
          *(_DWORD *)(v15 - 28) = 0;
        }
        else
        {
          *(_QWORD *)v15 = *(_QWORD *)((char *)a2 + v17);
          *(_DWORD *)(v15 + 24) = *(_DWORD *)((char *)a2 + v17 + 104);
          v18 = *(_QWORD *)((char *)a2 + v17 + 56);
          *(_DWORD *)(v15 - 28) &= ~0x40000u;
          *(_QWORD *)(v15 + 40) = v18;
          *(_DWORD *)((char *)a2 + v17 + 264) = *(_DWORD *)((_BYTE *)a2 + v17 + 264) & 0xFFFFFBFD | 2;
        }
      }
      v15 += 216LL;
      ++v14;
    }
    while ( v14 < *((_DWORD *)v9 + 10) );
  }
  *((_DWORD *)v9 + 8) = v8;
  v19 = FindOrAssignPrimary((const struct tagPOINTERINPUTFRAME *)v9, a2, (struct tagHID_POINTER_DEVICE_INFO *)v15);
  v20 = v19;
  if ( v19 )
  {
    if ( (*((_DWORD *)a2 + 480) & 0x400) != 0 )
      *((_DWORD *)v19 + 17) |= 0x2000u;
    FixupPrimaryGestureContact(v19, (unsigned int)*((unsigned __int16 *)v19 + 24) % *((_DWORD *)a2 + 411), a2, a3, 1);
    v21 = 0;
    for ( i = v9[11]; v21 < *((_DWORD *)v9 + 10); ++v21 )
    {
      v23 = *(_WORD *)(i + 48);
      if ( v23 && (*((_DWORD *)a2 + 68 * ((unsigned int)v23 % *((_DWORD *)a2 + 411)) + 66) & 0x80u) == 0 )
      {
        if ( (struct tagPOINTERINFONODE *)i != v20 )
          FixupSecondaryGestureContacts(
            (struct tagPOINTERINFONODE *)i,
            (unsigned int)v23 % *((_DWORD *)a2 + 411),
            a2,
            a3,
            1);
        if ( GetPTPShellListener() )
          v24 = *(_QWORD *)GetPTPShellListener();
        else
          v24 = 0LL;
        *(_QWORD *)(i + 24) = v24;
      }
      i += 216LL;
    }
  }
  else
  {
LABEL_38:
    if ( *((_QWORD *)a2 + 239) )
      CleanupGestureCache(a2, v10, v11);
  }
}
