/*
 * XREFs of ?HrFindInterface@CDesktopRenderTarget@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801475F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::HrFindInterface(CDesktopRenderTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_13a6c51a_a471_439c_9055_ad1418ff1971.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_13a6c51a_a471_439c_9055_ad1418ff1971.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_13a6c51a_a471_439c_9055_ad1418ff1971.Data4;
    if ( v4 )
    {
      return 2147500034LL;
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 112) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
