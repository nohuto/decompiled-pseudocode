/*
 * XREFs of xxxODI_ColorInit @ 0x1C0060120
 * Callers:
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 * Callees:
 *     GetProcessLuid @ 0x1C0024E40 (GetProcessLuid.c)
 *     FastGetProfileStringFromIDW @ 0x1C0060570 (FastGetProfileStringFromIDW.c)
 *     xxxSetSysColors @ 0x1C0063184 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall xxxODI_ColorInit(__int64 a1)
{
  char *v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  char *v5; // rcx
  unsigned __int16 v6; // dx
  _DWORD *v7; // r14
  unsigned __int16 *v8; // r8
  int v9; // r9d
  int *v10; // r10
  int v11; // r11d
  char v12; // cl
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v16[128]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v17[32]; // [rsp+D0h] [rbp-30h] BYREF
  _WORD v18[28]; // [rsp+150h] [rbp+50h] BYREF

  v2 = (char *)gpsi;
  v3 = 0;
  v4 = 0LL;
  *(_OWORD *)((char *)gpsi + 4552) = gargbInitial;
  *(_OWORD *)(v2 + 4568) = xmmword_1C0164320;
  *(_OWORD *)(v2 + 4584) = xmmword_1C0164330;
  *(_OWORD *)(v2 + 4600) = xmmword_1C0164340;
  *(_OWORD *)(v2 + 4616) = xmmword_1C0164350;
  *(_OWORD *)(v2 + 4632) = xmmword_1C0164360;
  *(_OWORD *)(v2 + 4648) = xmmword_1C0164370;
  *((_QWORD *)v2 + 583) = 0xFF993300F2E4D7LL;
  *((_DWORD *)v2 + 1168) = 15790320;
  v5 = (char *)gpsi;
  *(_OWORD *)((char *)gpsi + 4428) = *(_OWORD *)((char *)gpsi + 4552);
  *(_OWORD *)(v5 + 4444) = *(_OWORD *)(v5 + 4568);
  *(_OWORD *)(v5 + 4460) = *(_OWORD *)(v5 + 4584);
  *(_OWORD *)(v5 + 4476) = *(_OWORD *)(v5 + 4600);
  *(_OWORD *)(v5 + 4492) = *(_OWORD *)(v5 + 4616);
  *(_OWORD *)(v5 + 4508) = *(_OWORD *)(v5 + 4632);
  *(_OWORD *)(v5 + 4524) = *(_OWORD *)(v5 + 4648);
  *(_QWORD *)(v5 + 4540) = *((_QWORD *)v5 + 583);
  *((_DWORD *)v5 + 1137) = *((_DWORD *)v5 + 1168);
  do
  {
    v18[0] = 0;
    if ( v3 != 1
      || (GetProcessLuid(0LL, &AuthenticationId), AuthenticationId.LowPart != 999)
      || AuthenticationId.HighPart
      || (FastGetProfileStringFromIDW(a1, 26LL, 33LL, &szNull, v18, 25, 0), (v6 = v18[0]) == 0) )
    {
      FastGetProfileStringFromIDW(a1, 0LL, v3 + 32, &szNull, v18, 25, 0);
      v6 = v18[0];
    }
    v7 = &v16[v4 * 4];
    v8 = v18;
    v9 = *(_DWORD *)&v16[v4 * 4 + 4552LL - (_QWORD)v16 + (_QWORD)gpsi];
    if ( v6 )
    {
      v10 = &v14;
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
          v9 = v14;
          break;
        }
      }
    }
    v17[v4++] = v3++;
    *v7 = v9;
  }
  while ( v3 < 0x1F );
  return xxxSetSysColors(a1, v3, (unsigned int)v17, (unsigned int)v16, 6);
}
