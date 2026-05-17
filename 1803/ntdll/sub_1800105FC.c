/*
 * XREFs of sub_1800105FC @ 0x1800105FC
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_1800CB430 @ 0x1800CB430 (sub_1800CB430.c)
 * Callees:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     sub_18000FA60 @ 0x18000FA60 (sub_18000FA60.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_180041914 @ 0x180041914 (sub_180041914.c)
 *     sub_180075968 @ 0x180075968 (sub_180075968.c)
 *     sub_180076DAC @ 0x180076DAC (sub_180076DAC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800105FC(__int64 a1, const char *a2, int a3, char a4, char **a5)
{
  __int64 v5; // rbx
  int v6; // r13d
  const char *v7; // r12
  __int64 v8; // rdi
  unsigned int v10; // r14d
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ebx
  unsigned __int64 v14; // rdi
  unsigned int v16; // eax
  int v17; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v18; // [rsp+38h] [rbp-A9h] BYREF
  const char *v19; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v20; // [rsp+48h] [rbp-99h]
  __int64 v21[4]; // [rsp+50h] [rbp-91h] BYREF
  _QWORD v22[16]; // [rsp+70h] [rbp-71h] BYREF

  v5 = *(_QWORD *)(a1 + 80);
  v6 = a3;
  v7 = a2;
  v20 = a1;
  v8 = a1;
  v19 = a2;
  v17 = a3;
  v18 = a1;
  v10 = 0;
  memset(v22, 0, sizeof(v22));
  LODWORD(v22[3]) = 0;
  v22[4] = v5;
  while ( 1 )
  {
    v11 = sub_18000FA60(*(_QWORD *)(v8 + 48), v7, v6, a5);
    v13 = v11;
    if ( v11 != -1073741267 )
      break;
    v16 = v10++;
    if ( v16 >= 0x20 || (a4 & 2) != 0 )
    {
      v13 = -1073741701;
      goto LABEL_10;
    }
    v13 = sub_180076DAC(*a5, v21, &v19, &v17);
    if ( v13 < 0 )
      goto LABEL_10;
    LODWORD(v22[3]) = *(_DWORD *)(v8 + 272);
    v13 = sub_180041914((unsigned int)v21, (unsigned int)v22, v20, v8, 2, (__int64)&v18);
    if ( v13 < 0 )
      goto LABEL_10;
    v8 = v18;
    sub_18001F5FC(v18);
    v7 = v19;
    v6 = v17;
  }
  if ( (a4 & 1) != 0 && v11 >= 0 )
  {
    if ( (a4 & 2) != 0 )
    {
      LOBYTE(v12) = 1;
      sub_180075968(*(_QWORD *)(v8 + 184), v12);
    }
    else
    {
      v14 = *(_QWORD *)(v8 + 48);
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        if ( v14 < *((_QWORD *)&xmmword_18016F4E0 + 1)
          || v14 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
        {
          sub_18000EF10(v14, v21);
        }
        else
        {
          *(_OWORD *)v21 = xmmword_18016F4E0;
        }
        if ( v21[1] != v14 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_10:
  if ( BYTE4(v22[15]) )
    RtlReleasePath(v22[0]);
  if ( v13 < 0 )
    *a5 = 0LL;
  return (unsigned int)v13;
}
