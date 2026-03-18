/*
 * XREFs of DxgkCheckDisplayState @ 0x1C01EB330
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000A74C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000A7A4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??_EVIDPNSOURCEINFO@@QEAAPEAXI@Z @ 0x1C0038890 (--_EVIDPNSOURCEINFO@@QEAAPEAXI@Z.c)
 *     ?CheckDisplayState@DISPLAYSTATECHECKER@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01EA370 (-CheckDisplayState@DISPLAYSTATECHECKER@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJIHPEBD@Z @ 0x1C01EABA0 (-Initialize@DISPLAYSTATECHECKER@@QEAAJIHPEBD@Z.c)
 */

__int64 __fastcall DxgkCheckDisplayState(char a1, int a2, char *a3, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  DISPLAYSTATECHECKER *v12[56]; // [rsp+20h] [rbp-208h] BYREF
  VIDPNSOURCEINFO *v13; // [rsp+1E0h] [rbp-48h]
  int v14; // [rsp+1E8h] [rbp-40h]
  int v15; // [rsp+1F0h] [rbp-38h]

  `vector constructor iterator'(
    (char *)v12,
    56LL,
    8LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v9 = DISPLAYSTATECHECKER::Initialize((DISPLAYSTATECHECKER *)v12, a1, a2, a3);
  if ( v9 >= 0 )
  {
    if ( a2 )
    {
      v10 = *((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 231);
      if ( v10 )
        *(_DWORD *)(v10 + 4) = 8;
    }
    v9 = DISPLAYSTATECHECKER::CheckDisplayState(v12, a4);
  }
  if ( v13 )
    VIDPNSOURCEINFO::`vector deleting destructor'(v13);
  `vector destructor iterator'((char *)v12, 56LL, 8LL, (void (__fastcall *)(char *))VIDPNSOURCEINFO::~VIDPNSOURCEINFO);
  return (unsigned int)v9;
}
