/*
 * XREFs of ?RtlStringCchCopyExA@@YAJPEAD_KPEBDPEAPEADPEA_KK@Z @ 0x1C0032D18
 * Callers:
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_K@Z @ 0x1C01A0AC8 (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C0032DBC (RtlStringCopyWorkerA.c)
 */

NTSTATUS __fastcall RtlStringCchCopyExA(char *a1, size_t a2, const char *a3, char **a4, unsigned __int64 *a5)
{
  NTSTATUS result; // eax
  const char *v8; // r9
  unsigned __int64 v9; // rdx
  char *v10; // r8
  size_t v11; // [rsp+20h] [rbp-18h]
  size_t v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  result = a1 == 0LL ? 0xC000000D : 0;
  if ( a1 )
  {
    v12 = 0LL;
    v8 = File;
    if ( a3 )
      v8 = a3;
    result = RtlStringCopyWorkerA(a1, 0x21uLL, &v12, v8, v11);
    v9 = 33 - v12;
    v10 = &a1[v12];
    if ( result >= 0 || (*a1 = 0, v10 = a1, v9 = 33LL, result == -2147483643) )
    {
      if ( a4 )
        *a4 = v10;
      if ( a5 )
        *a5 = v9;
    }
  }
  else
  {
    MEMORY[0] = 0;
  }
  return result;
}
