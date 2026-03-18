/*
 * XREFs of NtGdiEndPath @ 0x1C0137590
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiEndPath(HDC a1)
{
  __int64 v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  ULONG v5; // ecx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v1 = v6[0];
  if ( v6[0] )
  {
    v2 = *(_DWORD *)(v6[0] + 176LL);
    v3 = 1;
    if ( (v2 & 1) != 0 )
    {
      *(_DWORD *)(v6[0] + 176LL) = v2 & 0xFFFFFFFE;
      goto LABEL_4;
    }
    v5 = 1003;
  }
  else
  {
    v5 = 6;
  }
  EngSetLastError(v5);
  v3 = 0;
LABEL_4:
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v3;
}
