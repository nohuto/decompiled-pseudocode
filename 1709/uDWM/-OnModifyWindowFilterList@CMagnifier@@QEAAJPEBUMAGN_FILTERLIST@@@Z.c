/*
 * XREFs of ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800728BC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180073338 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnModifyWindowFilterList(CMagnifier *this, const struct MAGN_FILTERLIST *a2)
{
  __int64 v3; // r14
  unsigned int v5; // r15d
  char *v6; // r12
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // r8d
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v25; // [rsp+30h] [rbp-C8h]
  _DWORD v26[28]; // [rsp+40h] [rbp-B8h] BYREF

  v3 = 0LL;
  v5 = *(_DWORD *)a2 + *((_DWORD *)a2 + 1);
  if ( dword_1800C277C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C277C);
    if ( dword_1800C277C == -1 )
    {
      dword_1800C26BC = -2147023728;
      Init_thread_footer(&dword_1800C277C);
    }
  }
  v6 = (char *)this + 56;
  if ( *((_QWORD *)this + 7)
    || (v7 = CResource::Create(0x27u, *((_QWORD *)this + 2), (CBaseObject **)this + 7), v8 = v7, v7 >= 0) )
  {
    if ( !v5 || *(_DWORD *)a2 == 1 && *((_QWORD *)this + 8) == *((_QWORD *)a2 + 1) )
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 792LL))(
              *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
              0LL);
      v8 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26BC, 1u, v23, 0x100u);
    }
    else
    {
      v9 = 0;
      v10 = 0;
      v11 = 0LL;
      v25 = 0;
      if ( *(_DWORD *)a2 )
      {
        do
        {
          if ( (unsigned int)v11 >= 0x19 )
            break;
          if ( *((_QWORD *)this + 8) != *((_QWORD *)a2 + v11 + 1) )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6));
            if ( v12 )
            {
              v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
              if ( v13 )
              {
                v14 = *(_QWORD *)(v13 + 400);
                if ( v14 )
                {
                  v15 = *(_QWORD *)(v14 + 16);
                  if ( v15 )
                    LODWORD(v15) = *(_DWORD *)(v15 + 24);
                  ++v10;
                  v26[v3] = v15;
                  v3 = (unsigned int)(v3 + 1);
                }
              }
            }
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *(_DWORD *)a2 );
        v9 = 0;
      }
      if ( (unsigned int)v11 < v5 )
      {
        v16 = (_QWORD *)((char *)a2 + 8 * v11 + 8);
        while ( (unsigned int)v11 < 0x19 )
        {
          if ( *((_QWORD *)this + 8) != *v16 )
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6));
            if ( !v17 )
            {
              v8 = -2147023728;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26BC, 1u, -2147023728, 0x135u);
              return v8;
            }
            v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
            if ( v18 && (v19 = *(_QWORD *)(v18 + 400)) != 0 )
            {
              v20 = *(_QWORD *)(*(_QWORD *)(v19 + 256) + 16LL);
              if ( v20 )
                LODWORD(v20) = *(_DWORD *)(v20 + 24);
              v9 = v25 + 1;
              v26[v3] = v20;
              ++v25;
              v3 = (unsigned int)(v3 + 1);
            }
            else
            {
              v9 = v25;
            }
          }
          LODWORD(v11) = v11 + 1;
          ++v16;
          if ( (unsigned int)v11 >= v5 )
            break;
        }
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD, int))(**(_QWORD **)(*(_QWORD *)v6 + 16LL)
                                                                             + 680LL))(
              *(_QWORD *)(*(_QWORD *)v6 + 16LL),
              *(unsigned int *)(*(_QWORD *)v6 + 24LL),
              v26,
              v10,
              v9);
      v8 = v21;
      if ( v21 >= 0 )
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 792LL))(
                *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
                *(unsigned int *)(*(_QWORD *)v6 + 24LL));
        v8 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26BC, 1u, v22, 0x151u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26BC, 1u, v21, 0x14Du);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26BC, 1u, v7, 0xF8u);
  }
  return v8;
}
