/*
 * XREFs of ?NDQueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013FA0
 * Callers:
 *     ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140014170 (-QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400141F0 (-QIInternal@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDQueryInterface(void **this, const struct _GUID *a2, void **a3)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void **v14; // r8
  char *v15; // rax
  __int64 result; // rax
  __int64 v17; // rax
  char *v18; // rcx
  char *v19; // rax
  char *v20; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    v18 = (char *)(this + 1);
    v19 = v18;
    if ( !this )
      v19 = 0LL;
    *a3 = v19;
    goto LABEL_66;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4;
  if ( v7 )
  {
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data4;
    if ( v8 )
    {
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data4;
      if ( !v9 )
      {
        if ( !this[16] )
        {
          v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 16);
          if ( v3 >= 0 )
            *a3 = this + 3;
          return (unsigned int)v3;
        }
        v20 = (char *)(this + 3);
        goto LABEL_65;
      }
      v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1 )
        v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data4;
      if ( v10 )
      {
        v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1 )
          v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4;
        if ( v11 )
        {
          v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data1 )
            v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f851809c_c177_49a0_b1b2_b66f017943ab.Data4;
          if ( v12 )
          {
            v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
              v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
            if ( !v13 )
            {
              if ( !this[20] )
              {
                v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 20);
                if ( v3 < 0 )
                  return (unsigned int)v3;
                v15 = (char *)(this + 5);
                goto LABEL_32;
              }
              v20 = (char *)(this + 5);
              goto LABEL_65;
            }
            v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1 )
              v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_25385759_3236_4101_a943_25693dfb5d2d.Data4;
            if ( v17 )
              return CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, a3);
            if ( !this[22] )
            {
              v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 22);
              if ( v3 >= 0 )
                *a3 = this + 7;
              return (unsigned int)v3;
            }
            v20 = (char *)(this + 7);
          }
          else
          {
            if ( !this[21] )
            {
              v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 21);
              if ( v3 < 0 )
                return (unsigned int)v3;
              v15 = (char *)(this + 6);
              goto LABEL_32;
            }
            v20 = (char *)(this + 6);
          }
LABEL_65:
          *a3 = v20;
          v18 = (char *)(this + 1);
          goto LABEL_66;
        }
        v14 = this + 19;
      }
      else
      {
        v14 = this + 18;
      }
      if ( !*v14 )
      {
        v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, v14);
        if ( v3 < 0 )
          return (unsigned int)v3;
        v15 = (char *)(this + 4);
LABEL_32:
        *a3 = v15;
        return (unsigned int)v3;
      }
      v20 = (char *)(this + 4);
      goto LABEL_65;
    }
    if ( !this[17] )
    {
      v3 = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 17);
      if ( v3 >= 0 )
        *a3 = this + 2;
      return (unsigned int)v3;
    }
    v20 = (char *)(this + 2);
    goto LABEL_65;
  }
  if ( this[15] )
  {
    v18 = (char *)(this + 1);
    *a3 = v18;
LABEL_66:
    (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))(v18);
    return (unsigned int)v3;
  }
  result = CSystemEffectWrapper::QIInternal((CSystemEffectWrapper *)this, a2, this + 15);
  v3 = result;
  if ( (int)result < 0 )
    return (unsigned int)v3;
  *a3 = this + 1;
  return result;
}
