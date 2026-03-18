/*
 * XREFs of ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0018410
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CMouseProcessor::CButtonEvent::GetButtonMessage(CMouseProcessor::CButtonEvent *this)
{
  unsigned int *result; // rax

  result = (unsigned int *)*((_QWORD *)this + 3);
  if ( result )
  {
    if ( (*((_BYTE *)this + 20) & 1) != 0 )
    {
      return (unsigned int *)result[2];
    }
    else if ( *((_DWORD *)this + 4) == 1 )
    {
      return (unsigned int *)*result;
    }
    else
    {
      return (unsigned int *)result[1];
    }
  }
  return result;
}
