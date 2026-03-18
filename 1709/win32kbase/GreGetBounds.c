/*
 * XREFs of GreGetBounds @ 0x1C006FD70
 * Callers:
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C0057050 (CreateCacheDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C00A9B2C (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall GreGetBounds(HDC a1, __m128i *a2, char a3)
{
  struct OBJECT *v5; // r9
  __int64 v6; // rax
  __m128i v7; // xmm0
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // eax
  __int32 v12; // r8d
  int v13; // eax
  unsigned int v14; // r15d
  struct OBJECT *v15; // rdi
  struct HOBJ__ *v16; // r13
  struct OBJECT *v17; // rbx
  BOOL v18; // r14d
  char v19; // al
  unsigned int v20; // edi
  GdiHandleManager *v21; // rsi
  __int64 v22; // rcx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // r9
  _DWORD *v26; // rdx
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // rdx
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  __int64 v32; // r10
  unsigned int v34; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v35; // rdx
  unsigned int v36; // ecx
  unsigned int v37; // ebx
  unsigned int v38; // edi
  __m128i v39; // [rsp+30h] [rbp-30h]
  struct OBJECT *v40; // [rsp+40h] [rbp-20h] BYREF
  __int64 v41; // [rsp+48h] [rbp-18h]

  v40 = 0LL;
  v41 = 0LL;
  XDCOBJ::vAltLock((XDCOBJ *)&v40, a1, 0);
  v5 = v40;
  if ( !v40 )
    goto LABEL_45;
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 4) != 0 )
      *((_DWORD *)v40 + 9) |= 0x40u;
    else
      *((_DWORD *)v40 + 9) |= 0x20u;
  }
  else if ( (a3 & 2) != 0 )
  {
    if ( (a3 & 4) != 0 )
      *((_DWORD *)v40 + 9) &= ~0x40u;
    else
      *((_DWORD *)v40 + 9) &= ~0x20u;
  }
  if ( (a3 & 4) == 0 )
  {
    v7 = *(__m128i *)((char *)v5 + 1480);
    goto LABEL_7;
  }
  v6 = *((_QWORD *)v5 + 198);
  if ( !v6
    || (a3 & 3) != 0
    || (v39 = *(__m128i *)(v6 + 88),
        v8 = _mm_cvtsi128_si32(v39),
        v9 = _mm_cvtsi128_si32(_mm_srli_si128(v39, 8)),
        v8 == v9)
    || v39.m128i_i32[1] == v39.m128i_i32[3] )
  {
    v7 = *(__m128i *)((char *)v5 + 1496);
LABEL_7:
    v39 = v7;
    v8 = v7.m128i_i32[0];
    v9 = v7.m128i_i32[2];
  }
  if ( v8 == v9 || v8 >= v9 || v39.m128i_i32[1] == v39.m128i_i32[3] || v39.m128i_i32[1] >= v39.m128i_i32[3] )
  {
LABEL_45:
    v14 = 0;
    goto LABEL_18;
  }
  if ( a2 )
  {
    if ( (*((_DWORD *)v5 + 10) & 1) != 0 )
      v10 = 1440LL;
    else
      v10 = 1432LL;
    v11 = *(_DWORD *)((char *)v5 + v10);
    v12 = v11 + v9;
    v39.m128i_i32[0] = v11 + v8;
    v13 = *(_DWORD *)((char *)v5 + v10 + 4);
    v39.m128i_i32[1] += v13;
    v39.m128i_i32[3] += v13;
    v39.m128i_i32[2] = v12;
    *a2 = v39;
  }
  v14 = 1;
  if ( (a3 & 4) != 0 )
  {
    *((_DWORD *)v5 + 374) = 0x7FFFFFFF;
    *((_DWORD *)v5 + 375) = 0x7FFFFFFF;
    *((_DWORD *)v5 + 376) = 0x80000000;
    *((_DWORD *)v5 + 377) = 0x80000000;
  }
  else
  {
    *((_DWORD *)v5 + 370) = 0x7FFFFFFF;
    *((_DWORD *)v5 + 371) = 0x7FFFFFFF;
    *((_DWORD *)v5 + 372) = 0x80000000;
    *((_DWORD *)v5 + 373) = 0x80000000;
  }
LABEL_18:
  if ( v5 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v40);
    v15 = v40;
    v16 = *(struct HOBJ__ **)v40;
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v40, v40, 0, 0, 1);
    if ( !(_DWORD)v41 )
      return v14;
    v17 = v40;
    if ( *((_BYTE *)v40 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
    {
      v34 = (unsigned __int16)*(_DWORD *)v15 | (*(_DWORD *)v15 >> 8) & 0xFF0000;
      RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v34 | (v34 >> 8) & 0xFF0000);
    }
    v18 = (*((_BYTE *)v17 + 15) & 8) != 0;
    v19 = *((_BYTE *)v17 + 14);
    if ( v19 == 5 )
    {
      v35 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v15 + 77);
      v36 = 0;
    }
    else
    {
      if ( v19 != 16 )
      {
LABEL_23:
        --*((_DWORD *)v15 + 2);
        v20 = *(_DWORD *)v17 & 0xFFFFFF;
        if ( v20 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v37 = *(unsigned __int16 *)v17;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v20,
                                        1)
                 + 13) == HIWORD(v20) )
              v20 = v37;
          }
          else
          {
            v20 = *(unsigned __int16 *)v17;
          }
        }
        v21 = gpHandleManager;
        v22 = *((_QWORD *)gpHandleManager + 2);
        v23 = *(_DWORD *)(v22 + 2056);
        if ( v20 >= v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
          goto LABEL_69;
        if ( v20 >= v23 )
          v24 = ((v20 - v23) >> 16) + 1;
        else
          v24 = 0;
        v25 = *(_QWORD *)(v22 + 8LL * v24 + 8);
        if ( v24 )
          v20 += ((1 - v24) << 16) - v23;
        if ( v20 >= *(_DWORD *)(v25 + 20) )
LABEL_69:
          v26 = 0LL;
        else
          v26 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v20 >> 8))
                           + 16LL * (unsigned __int8)v20
                           + 8);
        v27 = (unsigned __int16)*v26;
        v28 = v27 | (*v26 >> 8) & 0xFF0000u;
        if ( (unsigned int)v28 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v38 = (unsigned __int16)v27;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v27,
                                        1)
                 + 13) == WORD1(v28) )
              v28 = v38;
          }
          else
          {
            v28 = (unsigned __int16)v27;
          }
        }
        v29 = *((_QWORD *)v21 + 2);
        v30 = *(_DWORD *)(v29 + 2056);
        if ( (unsigned int)v28 < v30 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16) )
        {
          if ( (unsigned int)v28 >= v30 )
            v31 = (((unsigned int)v28 - v30) >> 16) + 1;
          else
            v31 = 0;
          v32 = *(_QWORD *)(v29 + 8LL * v31 + 8);
          if ( v31 )
            v28 = ((1 - v31) << 16) - v30 + (unsigned int)v28;
          *(_DWORD *)(*(_QWORD *)v32 + 24 * v28 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * ((unsigned __int64)(unsigned int)v28 >> 8))
          + 16LL * (unsigned __int8)v28,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( v18 )
          bDeleteDCInternalEx(v16, 0LL);
        return v14;
      }
      v35 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v15 + 19);
      v36 = 2;
    }
    TrackObjectReferenceDecrement(v36, v35);
    goto LABEL_23;
  }
  return v14;
}
