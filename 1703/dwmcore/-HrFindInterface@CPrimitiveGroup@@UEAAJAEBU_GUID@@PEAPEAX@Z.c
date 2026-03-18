/*
 * XREFs of ?HrFindInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004CA90
 * Callers:
 *     ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C9B0 (-QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::HrFindInterface(CPrimitiveGroup *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data4;
    if ( v4 )
    {
      *a3 = 0LL;
      return 2147500033LL;
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
