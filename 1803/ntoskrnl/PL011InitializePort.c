/*
 * XREFs of PL011InitializePort @ 0x1402CC180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall PL011InitializePort(__int64 a1, __int64 *a2, char a3, __int64 a4, char a5)
{
  __int16 v7; // ax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int16 v15; // cx
  __int64 v16; // r8

  if ( !a3 )
    return 0;
  v7 = 16;
  if ( a5 != 32 )
    v7 = 0;
  *((_WORD *)a2 + 6) = v7;
  v8 = *a2 + 48;
  if ( a5 == 32 )
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v8, 0LL);
  else
    ((void (__fastcall *)(__int64, _QWORD))off_140399428[0])(v8, 0LL);
  do
    ((void (__fastcall *)(__int64, _QWORD))off_140399418[0])(*a2 + 44, 0LL);
  while ( (((__int64 (__fastcall *)(__int64))off_140399420[0])(*a2 + 24) & 0x90) != 0x90 );
  v10 = *a2 + 44;
  if ( a5 == 32 )
  {
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v10, 112LL);
  }
  else
  {
    LOBYTE(v9) = 112;
    ((void (__fastcall *)(__int64, __int64))off_140399418[0])(v10, v9);
  }
  v11 = *a2 + 56;
  if ( a5 == 32 )
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v11, 0LL);
  else
    ((void (__fastcall *)(__int64, _QWORD))off_140399428[0])(v11, 0LL);
  v12 = *a2 + 68;
  if ( a5 == 32 )
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v12, 2047LL);
  else
    ((void (__fastcall *)(__int64, __int64))off_140399428[0])(v12, 2047LL);
  v13 = *a2 + 48;
  if ( a5 == 32 )
    ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v13, 17152LL);
  else
    ((void (__fastcall *)(__int64, __int64))off_140399428[0])(v13, 17152LL);
  v14 = *a2 + 48;
  if ( a5 == 32 )
    v15 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v14);
  else
    v15 = ((__int64 (__fastcall *)(__int64))off_140399420[0])(v14);
  v16 = *a2;
  if ( a5 == 32 )
    ((void (__fastcall *)(__int64, _QWORD))off_140399438[0])(v16 + 48, v15 | 1u);
  else
    ((void (__fastcall *)(__int64, _QWORD))off_140399428[0])(v16 + 48, v15 | 1u);
  return 1;
}
