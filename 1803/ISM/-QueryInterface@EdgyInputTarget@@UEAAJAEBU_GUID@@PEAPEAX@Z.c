/*
 * XREFs of ?QueryInterface@EdgyInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B4B60
 * Callers:
 *     ?QueryInterface@EdgyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B4C70 (-QueryInterface@EdgyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@EdgyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B4C90 (-QueryInterface@EdgyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyInputTarget::QueryInterface(EdgyInputTarget *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char *v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4 )
    {
      (*(void (__fastcall **)(EdgyInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 8;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      (*(void (__fastcall **)(EdgyInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 16;
    }
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
