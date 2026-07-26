/*
 * XREFs of ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00BA180
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C14A8 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C001A680 (ndisIfReadNetworkGuidFromKey.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x1C0041BF8 (WPP_SF_Sd.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00B7D8C (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     KRegKey::QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___ @ 0x1C00BAB78 (KRegKey--QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceV2(
        Ndis::BindRegistry *this,
        KRegKey *a2,
        struct KRegKey *a3,
        union _NET_LUID_LH *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  const WCHAR *v10; // rax
  __int16 v11; // ax
  void *m_ptr; // rcx
  __int16 v13; // r14
  const wchar_t *v14; // rax
  __int64 v15; // rcx
  __int16 v16; // ax
  void *v17; // rcx
  const wchar_t *v18; // rax
  __int64 v19; // rcx
  __int16 v20; // ax
  void *v21; // rcx
  int v22; // eax
  ULONG v23; // eax
  const wchar_t *v24; // rax
  __int64 v25; // rcx
  __int16 v26; // ax
  void *v27; // rcx
  int v28; // eax
  ULONG v29; // eax
  const wchar_t *v30; // rax
  __int64 v31; // rcx
  __int16 v32; // ax
  void *v33; // rcx
  int v34; // eax
  const wchar_t *v35; // rdx
  const wchar_t *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  const wchar_t *v39; // rax
  ULONG v40; // edx
  __int128 v41; // xmm0
  unsigned __int16 v42; // cx
  NTSTATUS v43; // ebx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  ULONG v45; // [rsp+40h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+44h] [rbp-3Ch] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-38h] BYREF
  int v48; // [rsp+4Ch] [rbp-34h]
  int v49; // [rsp+50h] [rbp-30h]
  ULONG v50; // [rsp+54h] [rbp-2Ch]

  memset(a4, 0, 0x484uLL);
  result = Ndis::BindRegistry::LoadNetworkInterfaceString((__int64)a2, L"IfAlias", (_WORD *)&a4->Info + 2);
  if ( (int)result >= 0 )
  {
    result = Ndis::BindRegistry::LoadNetworkInterfaceString((__int64)a2, L"IfDescr", &a4[65]);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)&ValueName.Length = 0;
      ValueName.Buffer = 0LL;
      v9 = 0x7FFFLL;
      v10 = L"IfType";
      while ( *v10 )
      {
        ++v10;
        if ( !--v9 )
        {
          v43 = -1073741811;
          goto LABEL_86;
        }
      }
      ValueName.Buffer = (wchar_t *)L"IfType";
      v11 = 0x7FFF - v9;
      m_ptr = a2->m_ptr;
      ValueName.Length = 2 * v11;
      ValueName.MaximumLength = 2 * v11 + 2;
      v43 = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
      if ( v43 < 0 )
      {
        v13 = v45;
      }
      else if ( v48 == 4 )
      {
        if ( v49 == 4 )
        {
          v13 = v50;
          v43 = 0;
        }
        else
        {
          v13 = v45;
          v43 = -1073741789;
        }
      }
      else
      {
        v13 = v45;
        v43 = -1073741788;
      }
      if ( v43 >= 0 )
      {
        ValueName.Buffer = 0LL;
        v14 = L"NetLuidIndex";
        *(_DWORD *)&ValueName.Length = 0;
        v15 = 0x7FFFLL;
        while ( *v14 )
        {
          ++v14;
          if ( !--v15 )
          {
            v43 = -1073741811;
            goto LABEL_84;
          }
        }
        ValueName.Buffer = L"NetLuidIndex";
        v16 = 0x7FFF - v15;
        v17 = a2->m_ptr;
        ValueName.Length = 2 * v16;
        ValueName.MaximumLength = 2 * v16 + 2;
        v43 = ZwQueryValueKey(v17, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
        if ( v43 >= 0 )
        {
          if ( v48 == 4 )
          {
            if ( v49 == 4 )
            {
              ResultLength = v50;
              v43 = 0;
            }
            else
            {
              v43 = -1073741789;
            }
          }
          else
          {
            v43 = -1073741788;
          }
        }
        if ( v43 >= 0 )
        {
          *(_DWORD *)&ValueName.Length = 0;
          v18 = L"MediaType";
          ValueName.Buffer = 0LL;
          v19 = 0x7FFFLL;
          while ( *v18 )
          {
            ++v18;
            if ( !--v19 )
              goto LABEL_75;
          }
          ValueName.Buffer = L"MediaType";
          v20 = 0x7FFF - v19;
          v21 = a2->m_ptr;
          ValueName.Length = 2 * v20;
          ValueName.MaximumLength = 2 * v20 + 2;
          if ( ZwQueryValueKey(v21, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v45) >= 0 )
          {
            if ( v48 == 4 )
            {
              if ( v49 == 4 )
              {
                v45 = v50;
                v22 = 0;
              }
              else
              {
                v22 = -1073741789;
              }
            }
            else
            {
              v22 = -1073741788;
            }
            if ( v22 >= 0 )
            {
              v23 = v45;
              goto LABEL_31;
            }
          }
LABEL_75:
          v23 = 0;
LABEL_31:
          *((_DWORD *)&a4[134].Info + 1) = v23;
          v24 = L"PhysicalMediaType";
          *(_DWORD *)&ValueName.Length = 0;
          ValueName.Buffer = 0LL;
          v25 = 0x7FFFLL;
          while ( *v24 )
          {
            ++v24;
            if ( !--v25 )
              goto LABEL_78;
          }
          ValueName.Buffer = L"PhysicalMediaType";
          v26 = 0x7FFF - v25;
          v27 = a2->m_ptr;
          ValueName.Length = 2 * v26;
          ValueName.MaximumLength = 2 * v26 + 2;
          if ( ZwQueryValueKey(v27, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v45) >= 0 )
          {
            if ( v48 == 4 )
            {
              if ( v49 == 4 )
              {
                v45 = v50;
                v28 = 0;
              }
              else
              {
                v28 = -1073741789;
              }
            }
            else
            {
              v28 = -1073741788;
            }
            if ( v28 >= 0 )
            {
              v29 = v45;
              goto LABEL_41;
            }
          }
LABEL_78:
          v29 = 0;
LABEL_41:
          LODWORD(a4[135].Value) = v29;
          v30 = L"Characteristics";
          *(_DWORD *)&ValueName.Length = 0;
          ValueName.Buffer = 0LL;
          v31 = 0x7FFFLL;
          while ( *v30 )
          {
            ++v30;
            if ( !--v31 )
              goto LABEL_52;
          }
          ValueName.Buffer = L"Characteristics";
          v32 = 0x7FFF - v31;
          v33 = a2->m_ptr;
          ValueName.Length = 2 * v32;
          ValueName.MaximumLength = 2 * v32 + 2;
          if ( ZwQueryValueKey(v33, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v45) >= 0 )
          {
            if ( v48 == 4 )
            {
              if ( v49 == 4 )
              {
                v45 = v50;
                v34 = 0;
              }
              else
              {
                v34 = -1073741789;
              }
            }
            else
            {
              v34 = -1073741788;
            }
            if ( v34 >= 0 && (v45 & 4) != 0 )
              *((_DWORD *)&a4[135].Info + 1) |= 2u;
          }
LABEL_52:
          *(_DWORD *)&ValueName.Length = 0;
          v35 = L"CurrentAddress";
          LOWORD(a4[136].Value) = 0;
          v36 = L"CurrentAddress";
          ValueName.Buffer = 0LL;
          v37 = 0x7FFFLL;
          while ( *v36 )
          {
            ++v36;
            if ( !--v37 )
            {
LABEL_81:
              v43 = -1073741811;
              goto LABEL_82;
            }
          }
          ValueName.Buffer = L"CurrentAddress";
          ValueName.Length = 2 * (0x7FFF - v37);
          ValueName.MaximumLength = ValueName.Length + 2;
          v43 = KRegKey::QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___(a2, &ValueName);
          if ( (int)(v43 + 0x80000000) < 0 || v43 == -1073741772 )
          {
            v35 = L"PermanentAddress";
            *((_WORD *)&a4[140].Info + 1) = 0;
            *(_DWORD *)&ValueName.Length = 0;
            v38 = 0x7FFFLL;
            ValueName.Buffer = 0LL;
            v39 = L"PermanentAddress";
            while ( *v39 )
            {
              ++v39;
              if ( !--v38 )
                goto LABEL_81;
            }
            ValueName.Buffer = L"PermanentAddress";
            ValueName.Length = 2 * (0x7FFF - v38);
            ValueName.MaximumLength = ValueName.Length + 2;
            v43 = KRegKey::QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___(a2, &ValueName);
            if ( (int)(v43 + 0x80000000) < 0 || v43 == -1073741772 )
            {
              v40 = ResultLength;
              HIWORD(a3->m_ptr) = v13;
              a3->m_ptr = (void *)((unsigned __int64)a3->m_ptr & 0xFFFF000000000000uLL | ((unsigned __int64)(v40 & 0xFFFFFF) << 24));
              *((_WORD *)&a4[129].Info + 2) = v13;
              v41 = *(_OWORD *)this;
              LODWORD(a4[134].Value) = 0;
              *(_OWORD *)&a4[130].Value = v41;
              return ndisIfReadNetworkGuidFromKey(a2, (struct _GUID *)&a4[132]);
            }
            v35 = L"PermanentAddress";
          }
          else
          {
            v35 = L"CurrentAddress";
          }
LABEL_82:
          if ( (unsigned __int8)byte_1C009961D >= 2u )
            WPP_SF_Sd(0x1Au, &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids, v35, v43);
          return (unsigned int)v43;
        }
LABEL_84:
        if ( (unsigned __int8)byte_1C009961D < 2u )
          return (unsigned int)v43;
        v42 = 28;
        goto LABEL_88;
      }
LABEL_86:
      if ( (unsigned __int8)byte_1C009961D < 2u )
        return (unsigned int)v43;
      v42 = 27;
LABEL_88:
      WPP_SF_d(v42, &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids, v43);
      return (unsigned int)v43;
    }
  }
  return result;
}
