/*
 * XREFs of ?QueryInterface@ContextualProcessorBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFC40
 * Callers:
 *     ?QueryInterface@ContextualProcessorBuffer@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B15B0 (-QueryInterface@ContextualProcessorBuffer@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualProcessorBuffer@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B15D0 (-QueryInterface@ContextualProcessorBuffer@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContextualProcessorBuffer::QueryInterface(
        ContextualProcessorBuffer *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  char *v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4 )
    {
      goto LABEL_10;
    }
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4 )
    {
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
      return v3;
    }
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4 )
    {
LABEL_10:
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 8;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 16;
    }
    *a3 = v6;
    return v3;
  }
  return (unsigned int)-2147024809;
}
