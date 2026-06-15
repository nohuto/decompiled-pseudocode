/*
 * XREFs of ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180006BCC
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005510 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::UsageIndexProperty::UpdateCount(
        wil::details_abi::UsageIndexProperty *this,
        __int64 a2)
{
  _DWORD *v2; // r8
  char v3; // al
  _WORD *v4; // rax

  v2 = (_DWORD *)((char *)this + 4);
  if ( *((_DWORD *)this + 1) != (_DWORD)a2 )
  {
    v3 = *((_BYTE *)this + 2);
    *v2 = a2;
    if ( v3 == 1 )
    {
      v4 = (_WORD *)*((_QWORD *)this + 2);
      if ( v4 )
      {
        *v4 = a2;
      }
      else
      {
        *(_DWORD *)_o__errno(this, a2) = 22;
        invalid_parameter_noinfo();
      }
    }
    else if ( v3 == 2 )
    {
      memcpy_s(*((void *const *)this + 2), 4uLL, v2, 4uLL);
    }
  }
}
