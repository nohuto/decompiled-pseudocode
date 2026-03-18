/*
 * XREFs of SBSAInitializePort @ 0x1402CC4A0
 * Callers:
 *     SBSA32InitializePort @ 0x1402CC480 (SBSA32InitializePort.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall SBSAInitializePort(__int64 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int16 v7; // ax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx

  if ( !a3 )
    return 0;
  v7 = 16;
  if ( a5 != 32 )
    v7 = 0;
  *(_WORD *)(a2 + 12) = v7;
  v8 = *(_QWORD *)a2 + 48LL;
  if ( a5 == 32 )
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v8, 0LL);
  else
    ((void (__fastcall *)(__int64, _QWORD))off_140399428[0])(v8, 0LL);
  v10 = *(_QWORD *)a2 + 44LL;
  if ( a5 == 32 )
  {
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v10, 112LL);
  }
  else
  {
    LOBYTE(v9) = 112;
    ((void (__fastcall *)(__int64, __int64))off_140399418[0])(v10, v9);
  }
  v11 = *(_QWORD *)a2 + 56LL;
  if ( a5 == 32 )
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v11, 0LL);
  else
    ((void (__fastcall *)(__int64, _QWORD))off_140399428[0])(v11, 0LL);
  v12 = *(_QWORD *)a2 + 68LL;
  if ( a5 == 32 )
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v12, 2047LL);
  else
    ((void (__fastcall *)(__int64, __int64))off_140399428[0])(v12, 2047LL);
  v13 = *(_QWORD *)a2 + 48LL;
  if ( a5 == 32 )
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v13, 17152LL);
  else
    ((void (__fastcall *)(__int64, __int64))off_140399428[0])(v13, 17152LL);
  v14 = *(_QWORD *)a2 + 48LL;
  if ( a5 == 32 )
    v15 = ((unsigned int (__fastcall *)(__int64))off_140399430[0])(v14);
  else
    v15 = ((unsigned __int16 (__fastcall *)(__int64))off_140399420[0])(v14);
  v16 = *(_QWORD *)a2 + 48LL;
  if ( a5 == 32 )
  {
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v16, (unsigned __int16)v15 | 1u);
  }
  else
  {
    LOWORD(v15) = v15 | 1;
    ((void (__fastcall *)(__int64, __int64))off_140399428[0])(v16, v15);
  }
  return 1;
}
