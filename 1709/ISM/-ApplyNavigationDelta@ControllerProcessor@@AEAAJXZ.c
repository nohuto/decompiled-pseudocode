/*
 * XREFs of ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18003FF08
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x18003F7A8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003BFD0 (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18004039C (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180040768 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::ApplyNavigationDelta(ControllerProcessor *this)
{
  float v1; // xmm3_4
  unsigned int v2; // edi
  float v4; // xmm0_4
  float v5; // xmm2_4
  _DWORD *v6; // rdi
  _DWORD *v7; // rbx
  int v8; // r14d
  int v9; // esi
  struct tagPOINT v10; // rbx
  int v11; // r11d
  bool v12; // r8
  _DWORD *v13; // r10
  bool v14; // r14
  BOOL v15; // esi
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r9d
  struct ControllerNavigationManager *Instance; // rax
  int v20; // eax
  __int64 v21; // rcx
  struct tagPOINT v23; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT *v24; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((float *)this + 85);
  v2 = 0;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
  if ( v4 >= 1.0 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 86)) & _xmm) >= 1.0 )
  {
    v5 = *((float *)this + 86);
    v6 = (_DWORD *)((char *)this + 328);
    v7 = (_DWORD *)((char *)this + 324);
    *((float *)this + 86) = v5 - (float)(int)v5;
    *((float *)this + 85) = v1 - (float)(int)v1;
    (*(void (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 33) + 24LL))(
      *((_QWORD *)this + 33),
      (char *)this + 324,
      (char *)this + 328);
    v8 = *v6 + (int)v5;
    v9 = *v7 + (int)v1;
    v23 = (struct tagPOINT)__PAIR64__(v8, v9);
    v10 = ControllerProcessor::AdjustPointToBounds((struct tagPOINT)__PAIR64__(v8, v9), (struct tagRECT *)this + 19);
    v12 = v10 != __PAIR64__(v8, v9);
    v14 = v10.x == *v13
       || v10.x == *((_DWORD *)this + 78) - 1
       || v10.y == *((_DWORD *)this + 77)
       || v10.y == *((_DWORD *)this + 79) - 1;
    v15 = v11 != v10.x || *v6 != v10.y;
    v16 = ControllerProcessor::SetPointerPosition(this, v10, v12);
    v2 = v16;
    if ( v16 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_17;
      v18 = 1666;
      goto LABEL_16;
    }
    if ( (*((_BYTE *)this + 320) & 0x20) == 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 503) + 80LL))(
              *((_QWORD *)this + 503),
              *((_QWORD *)this + 505),
              *((_QWORD *)this + 506));
      v2 = v16;
      if ( v16 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        {
LABEL_17:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v18 = 1677;
LABEL_16:
        McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 12, v18, v16);
        goto LABEL_17;
      }
    }
    if ( v14 )
    {
      if ( v15 )
      {
        if ( (*((_BYTE *)this + 320) & 0x10) != 0 )
        {
          Instance = ControllerNavigationManager::GetInstance();
          if ( Instance )
          {
            v23 = v10;
            v24 = &v23;
            v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagPOINT **, __int64))(**((_QWORD **)Instance + 18)
                                                                                         + 104LL))(
                    *((_QWORD *)Instance + 18),
                    0LL,
                    &v24,
                    1LL);
            v2 = v20;
            if ( v20 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq(v21, &MinInput_Warning_CheckResult, 0, 187, v20);
              if ( IsDebuggerPresent() )
                __debugbreak();
              __fastfail(7u);
            }
          }
        }
      }
    }
  }
  return v2;
}
