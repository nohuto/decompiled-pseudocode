/*
 * XREFs of PfSnBeginAppLaunch @ 0x140563DB0
 * Callers:
 *     PfProcessCreateNotification @ 0x140563D18 (PfProcessCreateNotification.c)
 *     PfSnAppLaunchScenarioControl @ 0x1406C4BC4 (PfSnAppLaunchScenarioControl.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PfSnCheckScenario @ 0x140563F50 (PfSnCheckScenario.c)
 *     PfCalculateProcessHash @ 0x140564110 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x1405643EC (PfSnBeginScenario.c)
 *     PfSnLogScenarioDecision @ 0x1405646C8 (PfSnLogScenarioDecision.c)
 *     PfSnCheckModernApp @ 0x140564844 (PfSnCheckModernApp.c)
 *     PfSnScanCommandLine @ 0x140564B60 (PfSnScanCommandLine.c)
 *     PfSnIsHostingApplication @ 0x140564E38 (PfSnIsHostingApplication.c)
 *     PfSnFindImageFileName @ 0x140564F3C (PfSnFindImageFileName.c)
 */

__int64 __fastcall PfSnBeginAppLaunch(__int64 a1, void *a2, int a3)
{
  void *v6; // rdi
  unsigned int v7; // esi
  int v8; // ebx
  const void *ImageFileName; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  unsigned __int8 IsHostingApplication; // al
  int v14; // eax
  int v16; // eax
  int v17; // [rsp+40h] [rbp-49h] BYREF
  void *v18; // [rsp+48h] [rbp-41h] BYREF
  int v19[4]; // [rsp+50h] [rbp-39h] BYREF
  wchar_t SubStr[32]; // [rsp+60h] [rbp-29h] BYREF

  v18 = 0LL;
  v17 = 0;
  v6 = 0LL;
  memset(SubStr, 0, sizeof(SubStr));
  v7 = 0;
  v8 = PfSnCheckScenario(0LL, v19);
  if ( v8 < 0 )
    goto LABEL_17;
  if ( !a2 )
  {
    v16 = PfCalculateProcessHash(a1, &v18);
    v6 = v18;
    v8 = v16;
    if ( v16 < 0 )
    {
LABEL_17:
      PfSnLogScenarioDecision((unsigned int)SubStr, 0, 0, 15, 15, v8, -1LL);
      goto LABEL_14;
    }
    a2 = v18;
  }
  ImageFileName = (const void *)PfSnFindImageFileName(a2, &v18);
  if ( !ImageFileName )
  {
    v8 = -1073741811;
    goto LABEL_17;
  }
  v10 = (unsigned int)v18;
  if ( (unsigned int)v18 >= 0x1D )
    v10 = 29LL;
  v11 = v10;
  memmove(SubStr, ImageFileName, 2 * v10);
  v12 = *(_DWORD *)(a1 + 1180);
  SubStr[v11] = 0;
  *(_DWORD *)&SubStr[30] = v12;
  IsHostingApplication = PfSnIsHostingApplication(SubStr);
  v8 = PfSnScanCommandLine(&v17, IsHostingApplication);
  if ( v8 < 0 )
    goto LABEL_17;
  *(_DWORD *)&SubStr[30] += v17;
  v8 = PfSnCheckModernApp(&v18, &v17);
  if ( v8 < 0 )
    goto LABEL_17;
  v14 = *(_DWORD *)&SubStr[30];
  if ( (_DWORD)v18 )
  {
    v14 = v17 + *(_DWORD *)&SubStr[30];
    v7 = 8;
  }
  *(_DWORD *)&SubStr[30] = a3 + v14;
  if ( (dword_14036E0D0 & 0x20) != 0 || v19[0] == 2 )
    v7 |= 2u;
  v8 = PfSnBeginScenario(a1, SubStr, 0LL, v7);
  if ( v8 >= 0 )
    v8 = 0;
LABEL_14:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
