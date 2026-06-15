/*
 * XREFs of ?QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000EC20
 * Callers:
 *     ?QueryInterface@CProcess@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800115D0 (-QueryInterface@CProcess@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CProcess@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800115E0 (-QueryInterface@CProcess@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::QueryInterface(CProcess *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx

  v3 = a3 == 0LL ? 0x80004003 : 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_524f9d60_071f_4659_a185_7a99576bcf54.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_524f9d60_071f_4659_a185_7a99576bcf54.Data4 )
    {
      v4 = (unsigned __int64)this + 16;
LABEL_8:
      *a3 = (void *)(v4 & -(__int64)(this != 0LL));
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      return v3;
    }
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data4 )
    {
      v4 = (unsigned __int64)this + 24;
      goto LABEL_8;
    }
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      *a3 = this;
      (*(void (__fastcall **)(CProcess *))(*(_QWORD *)this + 8LL))(this);
    }
    else
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
  }
  return v3;
}
