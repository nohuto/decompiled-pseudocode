/*
 * XREFs of ?HampExtendedExecutionCheckPolicy@@YAJPEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180027DA0
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180027FEC (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180026A80 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180027F64 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z @ 0x180060550 (-HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z.c)
 */

__int64 __fastcall HampExtendedExecutionCheckPolicy(
        void *a1,
        __int64 a2,
        int a3,
        const unsigned __int16 * near *a4,
        struct _HAM_ACTIVITY_PROPERTIES *a5)
{
  __int64 v6; // rdi
  const wchar_t *v7; // rdx
  __int64 result; // rax
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  unsigned __int8 v14[16]; // [rsp+30h] [rbp-C8h] BYREF
  wchar_t Buffer[64]; // [rsp+40h] [rbp-B8h] BYREF

  v6 = a3;
  switch ( a3 )
  {
    case 0:
      goto LABEL_23;
    case 1:
      result = HampSystemCheckLocationCapability(a1, v14);
      goto LABEL_8;
    case 2:
LABEL_23:
      result = 0LL;
      v14[0] = 1;
      goto LABEL_8;
    case 3:
      v7 = L"extendedExecutionBackgroundAudio";
      goto LABEL_7;
    case 4:
      v7 = L"extendedExecutionUnconstrained";
LABEL_7:
      result = CapabilityCheck(a1, v7, v14);
      goto LABEL_8;
  }
  result = 3221225659LL;
LABEL_8:
  if ( (int)result >= 0 )
  {
    if ( v14[0] )
    {
      if ( !a4 || !*(_WORD *)a4 )
        a4 = (&EeDefaultDescription)[v6];
      memset_0(Buffer, 0, sizeof(Buffer));
      StringCbPrintfW(Buffer, 0x80uLL, L"Ee%d_%s", (unsigned int)v6, a4);
      HampActivityPropertiesInitialize((char *)Buffer, (char *)(&EeResourcePolicyNames)[v6], a5);
      *((_DWORD *)a5 + 1) |= 0xBu;
      *((_DWORD *)a5 + 2) |= 0x13u;
      v9 = *((_DWORD *)a5 + 1);
      v10 = *((_DWORD *)a5 + 2);
      if ( (_DWORD)v6 != 4 )
      {
        v9 |= 0x200u;
        *((_DWORD *)a5 + 1) = v9;
      }
      if ( (v6 & 0xFFFFFFFB) == 0 || (_DWORD)v6 == 2 )
      {
        v9 |= 4u;
        v10 |= 4u;
        *((_DWORD *)a5 + 1) = v9;
        *((_DWORD *)a5 + 2) = v10;
      }
      v11 = *(_DWORD *)a5;
      if ( (_DWORD)v6 == 2 )
      {
        *(_DWORD *)a5 = v11 & 0xFFFFFFF9 | 4;
        *((_DWORD *)a5 + 1) = v9 | 0x100;
        *((_DWORD *)a5 + 2) = v10 | 0x100;
        *((_DWORD *)a5 + 91) &= 0xFFFFFFFC;
        *((_QWORD *)a5 + 40) |= 0x20uLL;
        v12 = *(_DWORD *)a5;
      }
      else
      {
        v12 = v11 | 2;
        *(_DWORD *)a5 = v12;
        *((_DWORD *)a5 + 2) = v10 | 0x80;
        *((_DWORD *)a5 + 1) = v9 | 0x40;
      }
      v13 = *((_DWORD *)&EePdcActivityType + v6);
      *(_DWORD *)a5 = v12 | 0x140;
      *((_DWORD *)a5 + 67) = v13;
      if ( v13 != 5 )
        *((_DWORD *)a5 + 68) = 300;
      return 0LL;
    }
    else
    {
      return 3221225506LL;
    }
  }
  return result;
}
