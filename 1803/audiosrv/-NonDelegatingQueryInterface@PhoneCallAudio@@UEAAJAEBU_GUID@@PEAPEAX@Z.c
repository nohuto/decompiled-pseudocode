/*
 * XREFs of ?NonDelegatingQueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036ED0
 * Callers:
 *     ?QueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036FB0 (-QueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?NonDelegatingQueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FAAF0 (-NonDelegatingQueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall PhoneCallAudio::NonDelegatingQueryInterface(PhoneCallAudio *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD **v7; // rcx
  char *v8; // r9
  unsigned int (__fastcall *v9)(PhoneCallAudio *__hidden); // rax
  __int64 v11; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data4;
  if ( !v5 )
  {
    v8 = (char *)this - 24;
    v7 = (_QWORD **)((char *)this - 32);
    if ( !v7 )
      v8 = 0LL;
    goto LABEL_10;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4.Data4;
  if ( !v6 )
  {
    v7 = (_QWORD **)((char *)this - 32);
    if ( v7 )
    {
      v8 = (char *)this - 16;
LABEL_10:
      *a3 = v8;
      v9 = (unsigned int (__fastcall *)(PhoneCallAudio *__hidden))(*v7)[1];
      if ( v9 == PhoneCallAudio::AddRef )
        v9 = *(unsigned int (__fastcall **)(PhoneCallAudio *__hidden))(*v7[5] + 8LL);
      ((void (*)(void))v9)();
      return v3;
    }
    goto LABEL_20;
  }
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4;
  if ( !v11 )
  {
    v7 = (_QWORD **)((char *)this - 32);
    if ( v7 )
    {
      v8 = (char *)this - 8;
      goto LABEL_10;
    }
LABEL_20:
    v8 = 0LL;
    goto LABEL_10;
  }
  return CUnknown::NonDelegatingQueryInterface(this, a2, a3);
}
