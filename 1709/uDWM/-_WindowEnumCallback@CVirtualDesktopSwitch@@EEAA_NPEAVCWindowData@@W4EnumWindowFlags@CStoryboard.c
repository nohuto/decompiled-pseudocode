/*
 * XREFs of ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009A300
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000465C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18002EF8C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800955F0 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 */

char __fastcall CVirtualDesktopSwitch::_WindowEnumCallback(__int64 a1, struct CWindowData *a2, char a3, int *a4)
{
  int v7; // ebx
  int v8; // ecx
  int v9; // r14d
  unsigned int v10; // r15d
  struct tagRECT v11; // xmm6
  int v12; // ecx
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  struct CAnimationComponent *v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  struct CAnimationComponent *v23; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-19h] BYREF
  struct tagRECT v26; // [rsp+68h] [rbp-9h] BYREF

  v23 = 0LL;
  v7 = 0;
  if ( (a3 & 1) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 176);
    if ( v8 == *(_DWORD *)(a1 + 144) )
    {
      v9 = *((_DWORD *)a2 + 150) & 0xFFF;
      if ( (unsigned int)(v9 - 75) <= 1 )
      {
        v10 = 0;
        if ( v8 )
        {
          while ( 1 )
          {
            v24 = *(struct tagRECT *)(*(_QWORD *)(a1 + 152) + 16LL * v10);
            v11 = v24;
            rc = v24;
            v12 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 8)) - _mm_cvtsi128_si32((__m128i)rc);
            if ( v12 < 0 )
              v12 = 0;
            v13 = -v12;
            if ( v9 != 75 )
              v13 = v12;
            OffsetRect(&rc, v13, 0);
            v26 = v11;
            OffsetRect(&v26, -v13, 0);
            v14 = CStoryboard::_AddAnimationComponent(
                    (CStoryboard *)a1,
                    *(struct CAnimationComponent **)(*(_QWORD *)(a1 + 120) + 8LL * v10));
            v7 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1u,
                v14,
                0x12AEu);
              goto LABEL_20;
            }
            CAnimatedTransitionVisual::SetBeginRect(
              *(struct tagPOINT **)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v10) + 40LL),
              &v24);
            v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v10) + 40LL);
            *(struct tagRECT *)(v15 + 872) = rc;
            CVisual::SetDirtyFlags((CVisual *)(v15 + 8), 4096);
            v16 = *(_QWORD *)(a1 + 120);
            v24 = v11;
            v17 = *(_QWORD *)(v16 + 8LL * v10);
            *(struct tagRECT *)(v17 + 104) = v11;
            *(_DWORD *)(v17 + 68) = 2;
            v18 = CVirtualDesktopSwitch::_CreateMonitorSnapshot((CVirtualDesktopSwitch *)a1, a2, &v24, 0, &v23);
            v19 = v23;
            v7 = v18;
            if ( v18 < 0 )
              break;
            v20 = CStoryboard::_AddAnimationComponent((CStoryboard *)a1, v23);
            v7 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1u,
                v20,
                0x12B5u);
              goto LABEL_17;
            }
            CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v19 + 5), &v26);
            v21 = *((_QWORD *)v19 + 5);
            *(struct tagRECT *)(v21 + 872) = v11;
            CVisual::SetDirtyFlags((CVisual *)(v21 + 8), 4096);
            *((_DWORD *)v19 + 17) = 2;
            *(struct tagRECT *)((char *)v19 + 104) = v11;
            CBaseObject::Release(v19);
            ++v10;
            v23 = 0LL;
            if ( v10 >= *(_DWORD *)(a1 + 176) )
              goto LABEL_20;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v18, 0x12B4u);
LABEL_17:
          if ( v19 )
            CBaseObject::Release(v19);
        }
      }
    }
    else
    {
      v7 = -2147019873;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147019873,
        0x1295u);
    }
  }
LABEL_20:
  *a4 = v7;
  return 1;
}
