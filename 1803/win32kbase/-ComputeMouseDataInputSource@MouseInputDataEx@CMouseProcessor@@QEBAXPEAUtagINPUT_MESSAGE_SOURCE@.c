/*
 * XREFs of ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C003A604
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0135A50 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(
        CMouseProcessor::MouseInputDataEx *this,
        struct tagINPUT_MESSAGE_SOURCE *a2)
{
  __int16 v4; // ax

  if ( *((_DWORD *)this + 18) == 1 || *((_DWORD *)this + 18) == 2 )
  {
    *(_DWORD *)a2 = 2;
    goto LABEL_5;
  }
  if ( (unsigned int)(*((_DWORD *)this + 18) - 3) <= 1 )
  {
    *(_DWORD *)a2 = 0;
LABEL_5:
    *((_DWORD *)a2 + 1) = 4;
    return;
  }
  v4 = *((_WORD *)this + 1);
  if ( (v4 & 0x10) != 0 )
  {
    *(_DWORD *)a2 = 4;
  }
  else if ( (v4 & 0x40) != 0 )
  {
    *(_DWORD *)a2 = 8;
  }
  else if ( (v4 & 0x80u) != 0 )
  {
    *(_DWORD *)a2 = 18;
  }
  else
  {
    *(_DWORD *)a2 = (v4 & 0x100 | 0x10u) >> 3;
  }
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(this, 64LL) )
    *((_DWORD *)a2 + 1) = 1;
  else
    *((_DWORD *)a2 + 1) = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(this, 16LL) != 0
                        ? 2
                        : 0;
}
