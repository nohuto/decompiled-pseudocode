/*
 * XREFs of ?UseForAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAA_NPEAUIDXGIResource@@@Z @ 0x18019D7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::UseForAdvancedDirectFlipRestoreBuffer(CDWMSwapChain *this, struct IDXGIResource *a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
  {
    if ( !*((_QWORD *)this + 51) && (*((_BYTE *)this + 164) & 0x10) != 0 )
    {
      *((_DWORD *)this + 106) = 0;
      result = 1;
      *((_QWORD *)this + 51) = a2;
    }
  }
  else
  {
    *((_QWORD *)this + 51) = 0LL;
  }
  return result;
}
