/*
 * XREFs of ?NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016190
 * Callers:
 *     ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016340 (-QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400163C0 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDQueryInterface(
        CSystemEffectWrapper *this,
        const struct _GUID *a2,
        void **a3)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  void **v12; // r8
  char *v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // rax
  char *v18; // rcx
  char *v19; // rax
  __int64 v20; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    v18 = (char *)this + 8;
    v19 = v18;
    if ( !this )
      v19 = 0LL;
    *a3 = v19;
    goto LABEL_64;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4;
  if ( !v7 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v18 = (char *)this + 8;
      *a3 = v18;
LABEL_64:
      (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))(v18);
      return (unsigned int)v3;
    }
    result = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 15);
    v3 = result;
    if ( (int)result < 0 )
      return (unsigned int)v3;
    *a3 = (char *)this + 8;
    return result;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data4;
  if ( !v8 )
  {
    if ( !*((_QWORD *)this + 17) )
    {
      v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 17);
      if ( v3 >= 0 )
        *a3 = (char *)this + 16;
      return (unsigned int)v3;
    }
    v17 = (char *)this + 16;
LABEL_63:
    *a3 = v17;
    v18 = (char *)this + 8;
    goto LABEL_64;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data4;
  if ( !v9 )
  {
    if ( !*((_QWORD *)this + 16) )
    {
      v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 16);
      if ( v3 >= 0 )
        *a3 = (char *)this + 24;
      return (unsigned int)v3;
    }
    v17 = (char *)this + 24;
    goto LABEL_63;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data4;
  if ( !v10 )
  {
    v12 = (void **)((char *)this + 144);
    goto LABEL_20;
  }
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4;
  if ( !v11 )
  {
    v12 = (void **)((char *)this + 152);
LABEL_20:
    if ( !*v12 )
    {
      v3 = CSystemEffectWrapper::QIInternal(this, a2, v12);
      if ( v3 < 0 )
        return (unsigned int)v3;
      v13 = (char *)this + 32;
LABEL_23:
      *a3 = v13;
      return (unsigned int)v3;
    }
    v17 = (char *)this + 32;
    goto LABEL_63;
  }
  v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data1 )
    v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data4;
  if ( !v15 )
  {
    if ( !*((_QWORD *)this + 21) )
    {
      v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 21);
      if ( v3 < 0 )
        return (unsigned int)v3;
      v13 = (char *)this + 48;
      goto LABEL_23;
    }
    v17 = (char *)this + 48;
    goto LABEL_63;
  }
  v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
    v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
  if ( !v16 )
  {
    if ( !*((_QWORD *)this + 20) )
    {
      v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 20);
      if ( v3 < 0 )
        return (unsigned int)v3;
      v13 = (char *)this + 40;
      goto LABEL_23;
    }
    v17 = (char *)this + 40;
    goto LABEL_63;
  }
  v20 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1 )
    v20 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_25385759_3236_4101_a943_25693dfb5d2d.Data4;
  if ( !v20 )
  {
    if ( !*((_QWORD *)this + 22) )
    {
      v3 = CSystemEffectWrapper::QIInternal(this, a2, (void **)this + 22);
      if ( v3 >= 0 )
        *a3 = (char *)this + 56;
      return (unsigned int)v3;
    }
    v17 = (char *)this + 56;
    goto LABEL_63;
  }
  return CSystemEffectWrapper::QIInternal(this, a2, a3);
}
