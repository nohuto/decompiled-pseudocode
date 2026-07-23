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

__int64 __fastcall sub_1800105FC(_QWORD *a1, const char *a2, int a3, char a4, char **a5)
{
  WCHAR *v5; // rbx
  int v6; // r13d
  const char *v7; // r12
  PVOID v8; // rdi
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // ebx
  void *v13; // rdi
  int v14; // eax
  unsigned int v16; // eax
  int v17; // [rsp+30h] [rbp-B1h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-A9h] BYREF
  const char *v19; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-99h]
  _OWORD v21[2]; // [rsp+50h] [rbp-91h] BYREF
  PWSTR Path[16]; // [rsp+70h] [rbp-71h] BYREF

  v5 = (WCHAR *)a1[10];
  v6 = a3;
  v7 = a2;
  v20 = a1;
  v8 = a1;
  v19 = a2;
  v17 = a3;
  BaseAddress = a1;
  v10 = 0;
  memset(Path, 0, sizeof(Path));
  LODWORD(Path[3]) = 0;
  Path[4] = v5;
  while ( 1 )
  {
    v11 = sub_18000FA60(*((_QWORD *)v8 + 6), v7, v6, a5);
    v12 = v11;
    if ( v11 != -1073741267 )
      break;
    v16 = v10++;
    if ( v16 >= 0x20 || (a4 & 2) != 0 )
    {
      v12 = -1073741701;
      goto LABEL_10;
    }
    v12 = sub_180076DAC(*a5, v21, &v19, &v17);
    if ( v12 < 0 )
      goto LABEL_10;
    LODWORD(Path[3]) = *((_DWORD *)v8 + 68);
    v12 = sub_180041914((unsigned int)v21, (unsigned int)Path, (_DWORD)v20, (_DWORD)v8, 2, (__int64)&BaseAddress);
    if ( v12 < 0 )
      goto LABEL_10;
    v8 = BaseAddress;
    sub_18001F5FC(BaseAddress);
    v7 = v19;
    v6 = v17;
  }
  if ( (a4 & 1) != 0 && v11 >= 0 )
  {
    if ( (a4 & 2) != 0 )
    {
      sub_180075968(*((PVOID *)v8 + 23));
    }
    else
    {
      v13 = (void *)*((_QWORD *)v8 + 6);
      LOBYTE(v14) = LdrControlFlowGuardEnforced();
      if ( v14 )
      {
        if ( (unsigned __int64)v13 < *((_QWORD *)&xmmword_18016F4E0 + 1)
          || (unsigned __int64)v13 >= *((_QWORD *)&xmmword_18016F4E0 + 1)
                                    + (unsigned __int64)(unsigned int)qword_18016F4F0 )
        {
          sub_18000EF10(v13, (__int64)v21);
        }
        else
        {
          v21[0] = xmmword_18016F4E0;
        }
        if ( *((void **)&v21[0] + 1) != v13 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_10:
  if ( BYTE4(Path[15]) )
    RtlReleasePath(Path[0]);
  if ( v12 < 0 )
    *a5 = 0LL;
  return (unsigned int)v12;
}
