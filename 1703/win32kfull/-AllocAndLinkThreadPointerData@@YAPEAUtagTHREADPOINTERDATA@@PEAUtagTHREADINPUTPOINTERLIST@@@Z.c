/*
 * XREFs of ?AllocAndLinkThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01C53B4
 * Callers:
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01C51E0 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     EditionAllocAndLinkThreadPointerData @ 0x1C01C9C70 (EditionAllocAndLinkThreadPointerData.c)
 * Callees:
 *     <none>
 */

struct tagTHREADPOINTERDATA *__fastcall AllocAndLinkThreadPointerData(struct tagTHREADINPUTPOINTERLIST *a1)
{
  struct tagTHREADPOINTERDATA *result; // rax
  __int64 v3; // rcx

  result = (struct tagTHREADPOINTERDATA *)Win32AllocPoolZInit(56LL, 1953526613LL);
  if ( result )
  {
    v3 = *(_QWORD *)a1;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)(*(_QWORD *)a1 + 8LL) != a1 )
      __fastfail(3u);
    *(_QWORD *)result = v3;
    *((_QWORD *)result + 1) = a1;
    *(_QWORD *)(v3 + 8) = result;
    *(_QWORD *)a1 = result;
    ++*((_DWORD *)a1 + 4);
  }
  return result;
}
