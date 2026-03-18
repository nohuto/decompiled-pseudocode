/*
 * XREFs of ?StateFlags@PDEVOBJ@@QEAAKXZ @ 0x1C025165C
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C0252430 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::StateFlags(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)this + 2592LL);
  if ( ((v1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    return *(unsigned int *)(v1 + 160);
  else
    return 0LL;
}
