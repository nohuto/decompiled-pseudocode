/*
 * XREFs of ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18007D28C
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007DBEC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnModifyWindowFilterList(CMagnifier *this, const struct MAGN_FILTERLIST *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r14d
  char *v6; // r15
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // r12d
  int v10; // r13d
  __int64 i; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _DWORD v25[28]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = 0LL;
  v3 = *(_DWORD *)a2 + *((_DWORD *)a2 + 1);
  if ( (dword_1800C46F8 & 1) == 0 )
  {
    dword_1800C45FC = -2147023728;
    dword_1800C46F8 |= 1u;
  }
  v6 = (char *)this + 56;
  if ( *((_QWORD *)this + 7)
    || (v7 = CResource::Create(0x26u, *((_QWORD *)this + 2), (CBaseObject **)this + 7), v8 = v7, v7 >= 0) )
  {
    if ( !v3 || *(_DWORD *)a2 == 1 && *((_QWORD *)this + 8) == *((_QWORD *)a2 + 1) )
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 792LL))(
              *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
              0LL);
      v8 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1800C45FC, 1LL, v23, 0x100u);
    }
    else
    {
      v9 = 0;
      v10 = 0;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)a2; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= 0x19 )
          break;
        if ( *((_QWORD *)this + 8) != *((_QWORD *)a2 + i + 1) )
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
                ++v9;
                v25[v2] = v15;
                v2 = (unsigned int)(v2 + 1);
              }
            }
          }
        }
      }
      if ( (unsigned int)i < v3 )
      {
        v16 = (_QWORD *)((char *)a2 + 8 * i + 8);
        while ( (unsigned int)i < 0x19 )
        {
          if ( *((_QWORD *)this + 8) != *v16 )
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6));
            if ( !v17 )
            {
              v8 = -2147023728;
              MilInstrumentationCheckHR(0x14u, &dword_1800C45FC, 1LL, -2147023728, 0x135u);
              return v8;
            }
            v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
            if ( v18 )
            {
              v19 = *(_QWORD *)(v18 + 400);
              if ( v19 )
              {
                v20 = *(_QWORD *)(*(_QWORD *)(v19 + 256) + 16LL);
                if ( v20 )
                  LODWORD(v20) = *(_DWORD *)(v20 + 24);
                ++v10;
                v25[v2] = v20;
                v2 = (unsigned int)(v2 + 1);
              }
            }
          }
          LODWORD(i) = i + 1;
          ++v16;
          if ( (unsigned int)i >= v3 )
            break;
        }
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD, int))(**(_QWORD **)(*(_QWORD *)v6 + 16LL)
                                                                             + 680LL))(
              *(_QWORD *)(*(_QWORD *)v6 + 16LL),
              *(unsigned int *)(*(_QWORD *)v6 + 24LL),
              v25,
              v9,
              v10);
      v8 = v21;
      if ( v21 >= 0 )
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 792LL))(
                *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
                *(unsigned int *)(*(_QWORD *)v6 + 24LL));
        v8 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1800C45FC, 1LL, v22, 0x151u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, &dword_1800C45FC, 1LL, v21, 0x14Du);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800C45FC, 1LL, v7, 0xF8u);
  }
  return v8;
}
