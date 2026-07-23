/*
 * XREFs of LdrpResolveProcedureAddress @ 0x180029014
 * Callers:
 *     LdrpResolveDelayloadAddress @ 0x1800029F4 (LdrpResolveDelayloadAddress.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     LdrpGetProcedureAddress @ 0x180028E78 (LdrpGetProcedureAddress.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrpLoadForwardedDll @ 0x18002BF34 (LdrpLoadForwardedDll.c)
 *     RtlReleasePath @ 0x180038070 (RtlReleasePath.c)
 *     RtlGuardCheckImageBase @ 0x18007981C (RtlGuardCheckImageBase.c)
 *     LdrpParseForwarderDescription @ 0x18007A4B8 (LdrpParseForwarderDescription.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(_QWORD *a1, const char *a2, int a3, char a4, unsigned __int64 *a5)
{
  WCHAR *v5; // rbx
  int v6; // r13d
  const char *v7; // r12
  PVOID v8; // rdi
  unsigned int v10; // r14d
  int ProcedureAddress; // eax
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
    ProcedureAddress = LdrpGetProcedureAddress(*((_QWORD *)v8 + 6), v7, v6, a5);
    v12 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v16 = v10++;
    if ( v16 >= 0x20 || (a4 & 2) != 0 )
    {
      v12 = -1073741701;
      goto LABEL_10;
    }
    v12 = LdrpParseForwarderDescription(*a5, v21, &v19, &v17);
    if ( v12 < 0 )
      goto LABEL_10;
    LODWORD(Path[3]) = *((_DWORD *)v8 + 68);
    v12 = LdrpLoadForwardedDll(v21, Path, v20, v8, 2, &BaseAddress);
    if ( v12 < 0 )
      goto LABEL_10;
    v8 = BaseAddress;
    LdrpDereferenceModule(BaseAddress);
    v7 = v19;
    v6 = v17;
  }
  if ( (a4 & 1) != 0 && ProcedureAddress >= 0 )
  {
    if ( (a4 & 2) != 0 )
    {
      RtlGuardCheckImageBase(*((PVOID *)v8 + 23));
    }
    else
    {
      v13 = (void *)*((_QWORD *)v8 + 6);
      LOBYTE(v14) = LdrControlFlowGuardEnforced();
      if ( v14 )
      {
        if ( (unsigned __int64)v13 < *((_QWORD *)&xmmword_18016F4D0 + 1)
          || (unsigned __int64)v13 >= *((_QWORD *)&xmmword_18016F4D0 + 1)
                                    + (unsigned __int64)(unsigned int)qword_18016F4E0 )
        {
          RtlpxLookupFunctionTable(v13, (__int64)v21);
        }
        else
        {
          v21[0] = xmmword_18016F4D0;
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
