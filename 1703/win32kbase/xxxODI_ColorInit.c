/*
 * XREFs of xxxODI_ColorInit @ 0x1C00737A0
 * Callers:
 *     InitUserScreen @ 0x1C00631F8 (InitUserScreen.c)
 * Callees:
 *     GetProcessLuid @ 0x1C0051060 (GetProcessLuid.c)
 *     xxxSetSysColors @ 0x1C0058C04 (xxxSetSysColors.c)
 *     FastGetProfileStringFromIDW @ 0x1C0073C00 (FastGetProfileStringFromIDW.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxODI_ColorInit(PCUNICODE_STRING Source)
{
  _OWORD *v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  char *v5; // rcx
  wchar_t v6; // dx
  char *v7; // r14
  wchar_t *v8; // r8
  int v9; // r9d
  int *v10; // r10
  int v11; // r11d
  char v12; // cl
  size_t v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-B8h] BYREF
  char v17[128]; // [rsp+50h] [rbp-B0h] BYREF
  char v18[128]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t v19[28]; // [rsp+150h] [rbp+50h] BYREF

  v2 = gpsi;
  v3 = 0;
  v4 = 0LL;
  *((_OWORD *)gpsi + 310) = gargbInitial;
  v2[311] = xmmword_1C0164430;
  v2[312] = xmmword_1C0164440;
  v2[313] = xmmword_1C0164450;
  v2[314] = xmmword_1C0164460;
  v2[315] = xmmword_1C0164470;
  v2[316] = xmmword_1C0164480;
  *((_QWORD *)v2 + 634) = 0xFF993300F2E4D7LL;
  *((_DWORD *)v2 + 1270) = 15790320;
  v5 = (char *)gpsi;
  *(_OWORD *)((char *)gpsi + 4836) = *((_OWORD *)gpsi + 310);
  *(_OWORD *)(v5 + 4852) = *((_OWORD *)v5 + 311);
  *(_OWORD *)(v5 + 4868) = *((_OWORD *)v5 + 312);
  *(_OWORD *)(v5 + 4884) = *((_OWORD *)v5 + 313);
  *(_OWORD *)(v5 + 4900) = *((_OWORD *)v5 + 314);
  *(_OWORD *)(v5 + 4916) = *((_OWORD *)v5 + 315);
  *(_OWORD *)(v5 + 4932) = *((_OWORD *)v5 + 316);
  *(_QWORD *)(v5 + 4948) = *((_QWORD *)v5 + 634);
  *((_DWORD *)v5 + 1239) = *((_DWORD *)v5 + 1270);
  do
  {
    v19[0] = 0;
    if ( v3 != 1
      || (GetProcessLuid(0LL, &AuthenticationId), AuthenticationId.LowPart != 999)
      || AuthenticationId.HighPart
      || (LODWORD(v14) = 25, FastGetProfileStringFromIDW(Source, v19, v14, 0), (v6 = v19[0]) == 0) )
    {
      LODWORD(v14) = 25;
      FastGetProfileStringFromIDW(Source, v19, v14, 0);
      v6 = v19[0];
    }
    v7 = &v17[v4];
    v8 = v19;
    v9 = *(_DWORD *)&v17[v4 + 4960LL - (_QWORD)v17 + (_QWORD)gpsi];
    if ( v6 )
    {
      v10 = &v15;
      v11 = 0;
      while ( v6 )
      {
        do
        {
          if ( (unsigned __int16)(v6 - 48) <= 9u )
            break;
          v6 = *++v8;
        }
        while ( *v8 );
        v6 = *v8;
        if ( !*v8 )
          break;
        v12 = 0;
        while ( v6 >= 0x30u && v6 <= 0x39u )
        {
          v12 = *(_BYTE *)v8++ + 10 * v12 - 48;
          v6 = *v8;
        }
        *(_BYTE *)v10 = v12;
        ++v11;
        v10 = (int *)((char *)v10 + 1);
        if ( v11 >= 3 )
        {
          *(_BYTE *)v10 = 0;
          v9 = v15;
          break;
        }
      }
    }
    *(_DWORD *)&v18[v4] = v3++;
    v4 += 4LL;
    *(_DWORD *)v7 = v9;
  }
  while ( v3 < 0x1F );
  return xxxSetSysColors((__int64)Source, v3, v18, v17, 6u);
}
