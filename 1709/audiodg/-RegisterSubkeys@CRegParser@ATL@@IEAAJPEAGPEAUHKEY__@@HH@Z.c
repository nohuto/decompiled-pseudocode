/*
 * XREFs of ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140054B14
 * Callers:
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x14005478C (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140054B14 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14001E4C0 (_alloca_probe.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x1400387A8 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140051F7C (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x140052574 (-AtlHresultFromWin32@ATL@@YAJK@Z.c)
 *     ?CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z @ 0x140052584 (-CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z.c)
 *     ?Close@CRegKey@ATL@@QEAAJXZ @ 0x14005268C (-Close@CRegKey@ATL@@QEAAJXZ.c)
 *     ?Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z @ 0x1400526B0 (-Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z.c)
 *     ?DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x140053120 (-DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z @ 0x140053214 (-HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140053354 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x1400534C4 (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x1400546A0 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140054B14 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140055270 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x14005532C (-StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ATL::CRegParser::RegisterSubkeys(
        ATL::CRegParser *this,
        unsigned __int16 *a2,
        HKEY a3,
        int a4,
        unsigned int a5)
{
  unsigned __int16 *v5; // rdi
  ATL::CRegParser *v6; // rsi
  int Token; // eax
  int v8; // ebx
  BOOL v9; // ebx
  ATL::CRegParser *v10; // rcx
  bool v11; // sf
  int v12; // eax
  HKEY v13; // rbx
  unsigned __int16 *v14; // r9
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  ATL::CRegParser *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v23; // [rsp+20h] [rbp-E0h]
  BOOL v24; // [rsp+40h] [rbp-C0h]
  int v25; // [rsp+40h] [rbp-C0h]
  int HasSubKeys; // [rsp+40h] [rbp-C0h]
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+64h] [rbp-9Ch]
  HKEY v32; // [rsp+68h] [rbp-98h]
  unsigned int v33; // [rsp+70h] [rbp-90h]
  HKEY v34[5]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 v35[264]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR ValueName[4096]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v34[3] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  v31 = a4;
  v32 = a3;
  v5 = a2;
  v6 = this;
  memset(v34, 0, 24);
  while ( 1 )
  {
    Token = ATL::CRegParser::NextToken(this, a2);
LABEL_3:
    v8 = Token;
    if ( Token < 0 )
      break;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *v5 == 125 )
          goto LABEL_82;
        v30 = 1;
        v9 = lstrcmpiW(v5, L"Delete") == 0;
        v24 = v9;
        if ( !lstrcmpiW(v5, L"ForceRemove") || v9 )
        {
          v8 = ATL::CRegParser::NextToken(v6, v5);
          if ( v8 < 0 )
            goto LABEL_82;
          if ( v31 )
          {
            hKey = 0LL;
            v28 = 0LL;
            v29 = 0LL;
            if ( ATL::CRegParser::StrChrW(v5, 0x5Cu) )
            {
              ATL::CRegKey::Close(&hKey);
LABEL_81:
              v8 = -2147352567;
              goto LABEL_82;
            }
            if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v10, v5) )
            {
              hKey = v32;
              ATL::CRegKey::RecurseDeleteKey(&hKey, v5);
              hKey = 0LL;
            }
            if ( v24 )
            {
              v8 = ATL::CRegParser::NextToken(v6, v5);
              if ( v8 < 0 )
                goto LABEL_79;
              v8 = ATL::CRegParser::SkipAssignment(v6, v5);
              goto LABEL_15;
            }
            ATL::CRegKey::Close(&hKey);
          }
        }
        if ( !lstrcmpiW(v5, L"NoRemove") )
        {
          v30 = 0;
          v8 = ATL::CRegParser::NextToken(v6, v5);
          if ( v8 < 0 )
            goto LABEL_82;
        }
        if ( !lstrcmpiW(v5, L"Val") )
        {
          v8 = ATL::CRegParser::NextToken(v6, ValueName);
          if ( v8 < 0 )
            goto LABEL_82;
          v8 = ATL::CRegParser::NextToken(v6, v5);
          if ( v8 < 0 )
            goto LABEL_82;
          if ( *v5 != 61 )
            goto LABEL_81;
          if ( !v31 )
          {
            if ( a5 || !v30 )
              goto LABEL_32;
            hKey = 0LL;
            v28 = 0LL;
            v29 = 0LL;
            v12 = ATL::CRegKey::Open(&hKey, v32, 0LL, 0x20006u);
            if ( !v12 )
            {
              v12 = RegDeleteValueW(hKey, ValueName);
              if ( (v12 & 0xFFFFFFFD) == 0 )
              {
                ATL::CRegKey::Close(&hKey);
LABEL_32:
                Token = ATL::CRegParser::SkipAssignment(v6, v5);
                goto LABEL_3;
              }
            }
LABEL_78:
            v8 = ATL::AtlHresultFromWin32(v12);
LABEL_79:
            ATL::CRegKey::Close(&hKey);
            goto LABEL_82;
          }
          v28 = 0LL;
          v29 = 0LL;
          hKey = v32;
          v8 = ATL::CRegParser::AddValue(v6, &hKey, ValueName, v5);
          hKey = 0LL;
LABEL_15:
          ATL::CRegKey::Close(&hKey);
          v11 = v8 < 0;
LABEL_16:
          if ( v11 )
            goto LABEL_82;
          goto LABEL_69;
        }
        if ( ATL::CRegParser::StrChrW(v5, 0x5Cu) )
          goto LABEL_81;
        if ( v31 )
          break;
        if ( a5 )
          v16 = 2;
        else
          v16 = ATL::CRegKey::Open(v34, v32, v5, 0x20019u);
        v25 = v16;
        v17 = a5;
        if ( v16 )
          v17 = 1;
        v33 = v17;
        v18 = _o_wcsncpy_s(v35, 260LL, v5, -1LL);
        ATL::AtlCrtErrorCheck(v18);
        v8 = ATL::CRegParser::NextToken(v6, v5);
        if ( v8 < 0 )
          goto LABEL_82;
        v8 = ATL::CRegParser::SkipAssignment(v6, v5);
        v19 = 0LL;
        if ( v8 < 0 )
          goto LABEL_82;
        if ( *v5 == 123 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( v5[v20] );
          if ( v20 == 1 )
          {
            v8 = ATL::CRegParser::RegisterSubkeys(v6, v5, v34[0], 0, v33);
            if ( v8 < 0 && !v33 )
              goto LABEL_82;
            v8 = ATL::CRegParser::NextToken(v6, v5);
            v19 = 0LL;
            if ( v8 < 0 )
              goto LABEL_82;
          }
        }
        v15 = v25;
        if ( v25 != 2 )
        {
          if ( v25 )
          {
            if ( !a5 )
              goto LABEL_80;
          }
          else if ( a5 && (unsigned int)ATL::CRegParser::HasSubKeys(0LL, v34[0]) )
          {
            if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v19, v35) && v30 )
              ATL::CRegKey::RecurseDeleteKey(v34, v35);
          }
          else
          {
            HasSubKeys = ATL::CRegParser::HasSubKeys(v19, v34[0]);
            v15 = ATL::CRegKey::Close(v34);
            if ( v15 )
              goto LABEL_80;
            if ( v30 && !HasSubKeys )
            {
              v28 = 0LL;
              v29 = 0LL;
              hKey = v32;
              v12 = ATL::CRegKey::DeleteSubKey((ATL::CRegKey *)&hKey, v35);
              hKey = 0LL;
              if ( v12 )
                goto LABEL_78;
              ATL::CRegKey::Close(&hKey);
              goto LABEL_69;
            }
          }
        }
      }
      v13 = v32;
      if ( (unsigned int)ATL::CRegKey::Open(v34, v32, v5, 0x2001Fu) )
      {
        if ( (unsigned int)ATL::CRegKey::Open(v34, v13, v5, 0x20019u) )
        {
          v15 = ATL::CRegKey::Create(v34, v13, v5, v14, v23);
          if ( v15 )
          {
LABEL_80:
            v8 = ATL::AtlHresultFromWin32(v15);
            goto LABEL_82;
          }
        }
      }
      v8 = ATL::CRegParser::NextToken(v6, v5);
      if ( v8 < 0 )
        goto LABEL_82;
      if ( *v5 == 61 )
      {
        v8 = ATL::CRegParser::AddValue(v6, v34, 0LL, v5);
        v11 = v8 < 0;
        goto LABEL_16;
      }
LABEL_69:
      if ( v31 )
      {
        if ( *v5 == 123 )
        {
          v21 = -1LL;
          do
            ++v21;
          while ( v5[v21] );
          if ( v21 == 1 )
            break;
        }
      }
    }
    v8 = ATL::CRegParser::RegisterSubkeys(v6, v5, v34[0], v31, 0);
    if ( v8 < 0 )
      break;
    a2 = v5;
    this = v6;
  }
LABEL_82:
  ATL::CRegKey::Close(v34);
  return (unsigned int)v8;
}
