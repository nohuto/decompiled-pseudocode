/*
 * XREFs of StorCompareScsiDeviceId @ 0x1C000F7D8
 * Callers:
 *     StorCompareScsiIdentity @ 0x1C0014BA0 (StorCompareScsiIdentity.c)
 * Callees:
 *     StorGetNextVPDIdDescriptor @ 0x1C000F920 (StorGetNextVPDIdDescriptor.c)
 *     StorInitVPDIdEnumeration @ 0x1C000F96C (StorInitVPDIdEnumeration.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0017C00 (__report_rangecheckfailure.c)
 *     memcmp @ 0x1C0017CF0 (memcmp.c)
 */

__int64 __fastcall StorCompareScsiDeviceId(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 i; // al
  __int64 v6; // rcx
  __int64 NextVPDIdDescriptor; // rax
  _BYTE *v8; // rdi
  unsigned __int8 v9; // r14
  _BYTE *v10; // rax
  unsigned __int8 v11; // cl
  bool v13; // zf
  _BYTE v14[24]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-30h]
  _BYTE v17[16]; // [rsp+60h] [rbp-20h]

  v2 = 0;
  for ( i = 0; i <= 8u; ++i )
  {
    v6 = i;
    if ( i >= 9uLL )
      _report_rangecheckfailure(i, a1);
    v16[v6] = 0;
    v17[v6] = 0;
  }
  if ( (unsigned __int8)StorInitVPDIdEnumeration(v14, a1) )
  {
    while ( 1 )
    {
      NextVPDIdDescriptor = StorGetNextVPDIdDescriptor(v14);
      v8 = (_BYTE *)NextVPDIdDescriptor;
      if ( !NextVPDIdDescriptor )
        break;
      v9 = *(_BYTE *)(NextVPDIdDescriptor + 1);
      if ( (v9 & 0x30) == 0 && (v9 & 0xFu) <= 8 )
      {
        if ( !(unsigned __int8)StorInitVPDIdEnumeration(v15, a2) )
          break;
        while ( 1 )
        {
          v10 = (_BYTE *)StorGetNextVPDIdDescriptor(v15);
          if ( !v10 )
            break;
          if ( ((v9 ^ v10[1]) & 0x30) == 0 && ((*v8 ^ *v10) & 0xF) == 0 && (v9 & 0xF) == (v10[1] & 0xF) )
          {
            v11 = v8[3];
            v16[v9 & 0xF] = 1;
            if ( v11 == v10[3] && !memcmp(v8 + 4, v10 + 4, v11) )
              v17[v9 & 0xF] = 1;
          }
        }
      }
    }
  }
  if ( v16[3] || v16[2] || v16[8] )
  {
    if ( v17[3] || v17[2] || v17[8] )
      return 0LL;
  }
  else
  {
    if ( v16[1] )
    {
      v13 = v17[1] == 0;
LABEL_24:
      LOBYTE(v2) = v13;
      return v2;
    }
    if ( v16[0] )
    {
      v13 = v17[0] == 0;
      goto LABEL_24;
    }
  }
  return 1LL;
}
