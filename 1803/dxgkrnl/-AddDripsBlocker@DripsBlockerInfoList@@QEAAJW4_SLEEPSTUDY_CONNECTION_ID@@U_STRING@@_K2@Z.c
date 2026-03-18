/*
 * XREFs of ?AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2@Z @ 0x1C019CC78
 * Callers:
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_K@Z @ 0x1C01A0AC8 (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 * Callees:
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C0032CD0 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall DripsBlockerInfoList::AddDripsBlocker(
        unsigned int *a1,
        int a2,
        const STRING *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 i; // r15
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rbx

  v5 = 0LL;
  for ( i = a2; (unsigned int)v5 < *a1; v5 = (unsigned int)(v5 + 1) )
  {
    v10 = *((_QWORD *)a1 + 1) + 48 * v5;
    if ( a4 == *(_QWORD *)(v10 + 16) && !RtlCompareString((const STRING *)v10, a3, 0) )
      break;
  }
  v11 = *a1;
  if ( (_DWORD)v5 == *a1 )
  {
    if ( v11 >= 0x40 )
      return 3221225495LL;
    v5 = *a1;
    *a1 = v11 + 1;
    v13 = *((_QWORD *)a1 + 1);
    v14 = 6 * v5;
    *(_QWORD *)(v13 + 8 * v14 + 24) = 0LL;
    *(_QWORD *)(v13 + 8 * v14 + 32) = 0LL;
    *(_QWORD *)(v13 + 8 * v14 + 40) = 0LL;
    RtlStringCchCopyA(*(char **)(*((_QWORD *)a1 + 1) + 48 * v5 + 8), 0x21uLL, a3->Buffer);
    *(_WORD *)(*((_QWORD *)a1 + 1) + 48 * v5) = a3->Length;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 48 * v5 + 16) = a4;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * (i + 6LL * (unsigned int)v5) + 24) += a5;
  return 0LL;
}
