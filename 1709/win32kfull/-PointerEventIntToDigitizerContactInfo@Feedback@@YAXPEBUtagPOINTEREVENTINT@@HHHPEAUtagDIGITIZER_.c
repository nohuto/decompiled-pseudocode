/*
 * XREFs of ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01BC08C
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01BB688 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Feedback::PointerEventIntToDigitizerContactInfo(
        Feedback *this,
        const struct tagPOINTEREVENTINT *a2,
        int a3,
        int a4,
        __int64 a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  *(_DWORD *)a5 = *((_DWORD *)this + 3);
  *(_QWORD *)(a5 + 4) = *((_QWORD *)this + 5);
  v5 = 0;
  if ( (_DWORD)a2 )
    v5 = 128;
  *(_DWORD *)(a5 + 36) = v5;
  *(_OWORD *)(a5 + 12) = *(_OWORD *)&gZero;
  v6 = *((_DWORD *)this + 2);
  if ( v6 == 2 )
  {
    *(_DWORD *)(a5 + 28) = 1;
    if ( (*((_DWORD *)this + 26) & 1) != 0 )
      *(_OWORD *)(a5 + 12) = *((_OWORD *)this + 7);
  }
  else if ( v6 == 3 )
  {
    *(_DWORD *)(a5 + 28) = 2;
    if ( a3 && (*((_DWORD *)this + 26) & 1) != 0 )
      *(_DWORD *)(a5 + 36) |= 0x20u;
    if ( (*((_DWORD *)this + 26) & 4) != 0 )
      *(_DWORD *)(a5 + 36) |= 0x40u;
  }
  v7 = *((_DWORD *)this + 5);
  if ( (v7 & 4) != 0 )
    v8 = (a4 != 0) + 2;
  else
    v8 = ~(_BYTE)v7 & 2 | 1;
  *(_DWORD *)(a5 + 32) = v8;
  if ( (_GetAsyncKeyState(16LL) & 0x8000u) != 0LL )
    *(_DWORD *)(a5 + 36) |= 1u;
  if ( (_GetAsyncKeyState(17LL) & 0x8000u) != 0LL )
    *(_DWORD *)(a5 + 36) |= 2u;
  if ( (_GetAsyncKeyState(164LL) & 0x8000u) != 0LL )
    *(_DWORD *)(a5 + 36) |= 4u;
  if ( (_GetAsyncKeyState(165LL) & 0x8000u) != 0LL )
    *(_DWORD *)(a5 + 36) |= 0x10u;
  if ( (_GetAsyncKeyState(91LL) & 0x8000u) != 0LL || (_GetAsyncKeyState(92LL) & 0x8000u) != 0LL )
    *(_DWORD *)(a5 + 36) |= 8u;
}
