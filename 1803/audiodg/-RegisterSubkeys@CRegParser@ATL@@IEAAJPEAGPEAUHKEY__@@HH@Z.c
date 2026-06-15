/*
 * XREFs of ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140052734
 * Callers:
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400523AC (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140052734 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14001D690 (_alloca_probe.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140037388 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x14005082C (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x140050E2C (-AtlHresultFromWin32@ATL@@YAJK@Z.c)
 *     ?CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z @ 0x140050E3C (-CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z.c)
 *     ?Close@CRegKey@ATL@@QEAAJXZ @ 0x140050F4C (-Close@CRegKey@ATL@@QEAAJXZ.c)
 *     ?Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z @ 0x140050F70 (-Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z.c)
 *     ?DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x140051A00 (-DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z @ 0x140051AF4 (-HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140051C44 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x140051DD8 (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x1400522C0 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140052734 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140052F08 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x140052FC4 (-StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z.c)
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
  int v11; // eax
  HKEY v12; // rbx
  unsigned __int16 *v13; // r9
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  ATL::CRegParser *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v22; // [rsp+20h] [rbp-E0h]
  BOOL v23; // [rsp+40h] [rbp-C0h]
  int v24; // [rsp+40h] [rbp-C0h]
  int HasSubKeys; // [rsp+40h] [rbp-C0h]
  DWORD v26; // [rsp+40h] [rbp-C0h]
  int v27; // [rsp+44h] [rbp-BCh]
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  HKEY v32; // [rsp+68h] [rbp-98h]
  unsigned int v33; // [rsp+70h] [rbp-90h]
  HKEY v34[5]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 v35[264]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR ValueName[4096]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v34[3] = HKEY_DYN_DATA|0x7FFFFFF8LL;
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
          goto LABEL_78;
        v27 = 1;
        v9 = lstrcmpiW(v5, L"Delete") == 0;
        v23 = v9;
        if ( !lstrcmpiW(v5, L"ForceRemove") || v9 )
        {
          v8 = ATL::CRegParser::NextToken(v6, v5);
          if ( v8 < 0 )
            goto LABEL_78;
          if ( a4 )
          {
            hKey = 0LL;
            v30 = 0LL;
            v31 = 0LL;
            if ( ATL::CRegParser::StrChrW(v5, 0x5Cu) )
            {
              ATL::CRegKey::Close(&hKey);
LABEL_77:
              v8 = -2147352567;
              goto LABEL_78;
            }
            if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v10, v5) )
            {
              hKey = v32;
              ATL::CRegKey::RecurseDeleteKey(&hKey, v5);
              hKey = 0LL;
            }
            if ( v23 )
            {
              v8 = ATL::CRegParser::NextToken(v6, v5);
              if ( v8 < 0 )
                goto LABEL_80;
              v8 = ATL::CRegParser::SkipAssignment(v6, v5);
              ATL::CRegKey::Close(&hKey);
LABEL_15:
              if ( v8 < 0 )
                goto LABEL_78;
              goto LABEL_68;
            }
            ATL::CRegKey::Close(&hKey);
          }
        }
        if ( !lstrcmpiW(v5, L"NoRemove") )
        {
          v27 = 0;
          v8 = ATL::CRegParser::NextToken(v6, v5);
          if ( v8 < 0 )
            goto LABEL_78;
        }
        if ( !lstrcmpiW(v5, L"Val") )
        {
          v8 = ATL::CRegParser::NextToken(v6, ValueName);
          if ( v8 < 0 )
            goto LABEL_78;
          v8 = ATL::CRegParser::NextToken(v6, v5);
          if ( v8 < 0 )
            goto LABEL_78;
          if ( *v5 != 61 )
            goto LABEL_77;
          if ( !a4 )
          {
            if ( a5 || !v27 )
              goto LABEL_31;
            hKey = 0LL;
            v30 = 0LL;
            v31 = 0LL;
            v11 = ATL::CRegKey::Open(&hKey, v32, 0LL, 0x20006u);
            if ( !v11 )
            {
              v11 = RegDeleteValueW(hKey, ValueName);
              if ( (v11 & 0xFFFFFFFD) == 0 )
              {
                ATL::CRegKey::Close(&hKey);
LABEL_31:
                Token = ATL::CRegParser::SkipAssignment(v6, v5);
                goto LABEL_3;
              }
            }
            v8 = ATL::AtlHresultFromWin32(v11);
LABEL_80:
            ATL::CRegKey::Close(&hKey);
            goto LABEL_78;
          }
          v30 = 0LL;
          v31 = 0LL;
          hKey = v32;
          v8 = ATL::CRegParser::AddValue(v6, &hKey, ValueName, v5);
          hKey = 0LL;
          ATL::CRegKey::Close(&hKey);
          goto LABEL_15;
        }
        if ( ATL::CRegParser::StrChrW(v5, 0x5Cu) )
          goto LABEL_77;
        if ( a4 )
          break;
        if ( a5 )
          v15 = 2;
        else
          v15 = ATL::CRegKey::Open(v34, v32, v5, 0x20019u);
        v24 = v15;
        v16 = a5;
        if ( v15 )
          v16 = 1;
        v33 = v16;
        v17 = _o_wcsncpy_s(v35, 260LL, v5, -1LL);
        ATL::AtlCrtErrorCheck(v17);
        v8 = ATL::CRegParser::NextToken(v6, v5);
        if ( v8 < 0 )
          goto LABEL_78;
        v8 = ATL::CRegParser::SkipAssignment(v6, v5);
        v18 = 0LL;
        if ( v8 < 0 )
          goto LABEL_78;
        if ( *v5 == 123 )
        {
          v19 = -1LL;
          do
            ++v19;
          while ( v5[v19] );
          if ( v19 == 1 )
          {
            v8 = ATL::CRegParser::RegisterSubkeys(v6, v5, v34[0], 0, v33);
            if ( v8 < 0 && !v33 )
              goto LABEL_78;
            v8 = ATL::CRegParser::NextToken(v6, v5);
            v18 = 0LL;
            if ( v8 < 0 )
              goto LABEL_78;
          }
        }
        v14 = v24;
        if ( v24 != 2 )
        {
          if ( v24 )
          {
            if ( !a5 )
              goto LABEL_58;
          }
          else if ( a5 && (unsigned int)ATL::CRegParser::HasSubKeys(0LL, v34[0]) )
          {
            if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v18, v35) && v27 )
              ATL::CRegKey::RecurseDeleteKey(v34, v35);
          }
          else
          {
            HasSubKeys = ATL::CRegParser::HasSubKeys(v18, v34[0]);
            v14 = ATL::CRegKey::Close(v34);
            if ( v14 )
              goto LABEL_58;
            if ( v27 && !HasSubKeys )
            {
              v30 = 0LL;
              v31 = 0LL;
              hKey = v32;
              v26 = ATL::CRegKey::DeleteSubKey((ATL::CRegKey *)&hKey, v35);
              hKey = 0LL;
              ATL::CRegKey::Close(&hKey);
              v14 = v26;
              if ( v26 )
                goto LABEL_58;
              goto LABEL_68;
            }
          }
        }
      }
      v12 = v32;
      if ( (unsigned int)ATL::CRegKey::Open(v34, v32, v5, 0x2001Fu) )
      {
        if ( (unsigned int)ATL::CRegKey::Open(v34, v12, v5, 0x20019u) )
        {
          v14 = ATL::CRegKey::Create(v34, v12, v5, v13, v22);
          if ( v14 )
          {
LABEL_58:
            v8 = ATL::AtlHresultFromWin32(v14);
            goto LABEL_78;
          }
        }
      }
      v8 = ATL::CRegParser::NextToken(v6, v5);
      if ( v8 < 0 )
        goto LABEL_78;
      if ( *v5 == 61 )
      {
        v8 = ATL::CRegParser::AddValue(v6, v34, 0LL, v5);
        if ( v8 < 0 )
          goto LABEL_78;
      }
LABEL_68:
      if ( a4 )
      {
        if ( *v5 == 123 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( v5[v20] );
          if ( v20 == 1 )
            break;
        }
      }
    }
    v8 = ATL::CRegParser::RegisterSubkeys(v6, v5, v34[0], a4, 0);
    if ( v8 < 0 )
      break;
    a2 = v5;
    this = v6;
  }
LABEL_78:
  ATL::CRegKey::Close(v34);
  return (unsigned int)v8;
}
