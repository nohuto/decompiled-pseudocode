/*
 * XREFs of ?_SqmEdgy@Edgy@@YAXAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@H@Z @ 0x1C01CE8BC
 * Callers:
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01CE5C0 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C01CE7C8 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall Edgy::_SqmEdgy(Edgy *this, const struct tagEDGY_DATA *a2, const struct Edgy::tagARC_DATA *a3)
{
  int v3; // ebp
  int v5; // ebx
  int v6; // esi
  bool v7; // zf
  int v8; // eax
  int v9; // ecx
  _DWORD v10[12]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (int)a3;
  if ( gSqmIsOptedIn )
  {
    v5 = *((_DWORD *)a2 + 12) - *((_DWORD *)this + 50);
    v6 = *((_DWORD *)a2 + 6);
    memset(&v10[1], 0, 0x2CuLL);
    v10[2] = v6;
    v7 = *((_DWORD *)this + 4) == 1;
    v8 = 0;
    v10[0] = 16;
    v9 = 2;
    v10[1] = 1;
    if ( !v7 )
      v9 = 0;
    v10[4] = 16;
    v10[5] = 1;
    v10[8] = 16;
    LOBYTE(v8) = v3 != 0;
    v10[9] = 1;
    v10[10] = v5;
    v10[6] = v8 | v9;
    WinSqmAddToStreamEx(0LL, 8509LL, 3LL, v10, 0);
  }
}
