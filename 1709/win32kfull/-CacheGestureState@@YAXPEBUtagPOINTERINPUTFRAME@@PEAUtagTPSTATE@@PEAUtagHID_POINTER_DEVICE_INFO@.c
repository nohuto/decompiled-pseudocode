/*
 * XREFs of ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AD764
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     CopyTPPointerInputFrame @ 0x1C01A6348 (CopyTPPointerInputFrame.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01ADA40 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AE464 (-FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUta.c)
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE51C (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AE66C (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 *     ?HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z @ 0x1C01AEAC8 (-HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z.c)
 */

void __fastcall CacheGestureState(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        unsigned __int64 a4)
{
  const struct tagPOINTERINPUTFRAME *v8; // rbp
  struct tagHID_POINTER_DEVICE_INFO *v9; // r8
  struct tagPOINTERINFONODE *v10; // rax
  int v11; // edx
  struct tagPOINTERINFONODE *v12; // rsi
  unsigned int v13; // r14d
  __int64 i; // rbx
  unsigned __int16 v15; // ax
  unsigned int v16; // edx
  __int64 v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rdx

  EtwTraceCopyPointerInputFrameStart();
  v8 = (const struct tagPOINTERINPUTFRAME *)CopyTPPointerInputFrame(a1, a4);
  EtwTraceCopyPointerInputFrameStop();
  if ( v8 )
  {
    *((_QWORD *)a2 + 239) = v8;
    v10 = FindOrAssignPrimary(v8, a2, v9);
    v12 = v10;
    if ( v10 )
    {
      if ( (*((_DWORD *)a2 + 480) & 0x400) != 0 )
        *((_DWORD *)v10 + 17) |= 0x2000u;
      FixupPrimaryGestureContact(v10, (unsigned int)*((unsigned __int16 *)v10 + 24) % *((_DWORD *)a2 + 411), a2, a3, 1);
      HitTestTPPrimaryContact(v12, a2);
      v13 = 0;
      for ( i = *((_QWORD *)v8 + 11); v13 < *((_DWORD *)v8 + 10); ++v13 )
      {
        v15 = *(_WORD *)(i + 48);
        if ( v15 )
        {
          v16 = (unsigned int)v15 % *((_DWORD *)a2 + 411);
          v17 = v16;
          if ( (struct tagPOINTERINFONODE *)i != v12 )
          {
            FixupSecondaryGestureContacts((struct tagPOINTERINFONODE *)i, v16, a2, a3, 1);
            if ( (*(_DWORD *)(i + 68) & 0x40000) != 0 )
              *(_DWORD *)(i + 68) = 0;
          }
          v18 = (_QWORD *)*((_QWORD *)a2 + 209);
          if ( v18 )
            v18 = (_QWORD *)*v18;
          *(_QWORD *)(i + 24) = v18;
          v19 = 272 * v17;
          *(_DWORD *)((char *)a2 + v19 + 264) |= 0x40u;
          *(_QWORD *)((char *)a2 + v19 + 48) = *(_QWORD *)(216LL * v13 + *((_QWORD *)a1 + 11) + 96);
        }
        i += 216LL;
      }
    }
    else
    {
      CleanupGestureCache(a2, v11);
    }
  }
}
