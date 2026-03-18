/*
 * XREFs of ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C0114200
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C0112C6C (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C011C7F8 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 */

void __fastcall DXGADAPTER::SetModeBehavior(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // [rsp+20h] [rbp-79h] BYREF
  struct _UNICODE_STRING v9; // [rsp+28h] [rbp-71h] BYREF
  struct _UNICODE_STRING v10; // [rsp+38h] [rbp-61h] BYREF
  _DXGKARG_CONTROLMODEBEHAVIOR v11; // [rsp+48h] [rbp-51h] BYREF
  __int128 v12; // [rsp+58h] [rbp-41h] BYREF
  int v13; // [rsp+68h] [rbp-31h]
  _OWORD v14[6]; // [rsp+70h] [rbp-29h] BYREF
  wchar_t v15; // [rsp+D0h] [rbp+37h]

  v3 = 0;
  *(_QWORD *)&v11.Request.0 = 0LL;
  v11.NotSatisfied.Value = 0;
  if ( (_BYTE)a3 )
  {
    v14[0] = *(_OWORD *)L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v15 = aRegistryMachin_19[48];
    v14[2] = *(_OWORD *)L"e\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v14[1] = *(_OWORD *)L"y\\Machine\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v10.Buffer = (wchar_t *)v14;
    v14[4] = *(_OWORD *)L"soft\\Windows\\DWM";
    v13 = *(_DWORD *)L"r";
    v14[3] = *(_OWORD *)L"RE\\Microsoft\\Windows\\DWM";
    v12 = *(_OWORD *)L"HighColor";
    *(_DWORD *)&v10.Length = 6422624;
    v14[5] = *(_OWORD *)L"dows\\DWM";
    *(_DWORD *)&v9.Length = 1310738;
    v9.Buffer = (wchar_t *)&v12;
    if ( ReadRegistryDwordKeyValue(&v10, &v9, &v8) >= 0 )
    {
      LOBYTE(v3) = v8 != 0;
      v11.Request.Value = v3 | v11.Request.Value & 0xFFFFFFFE;
    }
  }
  else
  {
    v11.Request.Value |= 1u;
  }
  v5 = (int)DXGADAPTER::DdiControlModeBehavior(this, &v11, a3);
  v6 = (unsigned int)v5 + 0x80000000;
  if ( (int)v6 >= 0 && (_DWORD)v5 != -1073741637 )
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdError(v7);
  }
}
