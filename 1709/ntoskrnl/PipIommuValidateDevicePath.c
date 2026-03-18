/*
 * XREFs of PipIommuValidateDevicePath @ 0x14058FAE0
 * Callers:
 *     PipIommuRetrieveDevicePath @ 0x14058FA04 (PipIommuRetrieveDevicePath.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall PipIommuValidateDevicePath(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  unsigned __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v11; // rcx
  __int64 v12; // rax

  if ( *(int *)BugCheckParameter3 >= 3 )
  {
    BugCheckParameter4 = -1073741811LL;
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(BugCheckParameter3 + 24);
  v6 = BugCheckParameter3 + 32;
  v7 = BugCheckParameter3 + a3;
  if ( !v5 )
    goto LABEL_8;
  v8 = *(unsigned int *)(BugCheckParameter3 + 8);
  if ( !(_DWORD)v8 )
    goto LABEL_8;
  if ( v5 < v6 )
  {
LABEL_11:
    BugCheckParameter4 = -1073741503LL;
    goto LABEL_10;
  }
  result = v5 + v8;
  if ( result > v7 )
  {
LABEL_16:
    BugCheckParameter4 = -2147483643LL;
LABEL_10:
    KeBugCheckEx(0xCAu, 0x12uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( !*(_DWORD *)BugCheckParameter3 )
    return result;
  v11 = *(_QWORD *)(BugCheckParameter3 + 16);
  if ( !v11 || (v12 = *(unsigned int *)(BugCheckParameter3 + 4), !(_DWORD)v12) )
  {
LABEL_8:
    BugCheckParameter4 = -1073741306LL;
    goto LABEL_10;
  }
  if ( v11 < v6 )
    goto LABEL_11;
  result = v11 + v12;
  if ( result > v7 )
    goto LABEL_16;
  return result;
}
