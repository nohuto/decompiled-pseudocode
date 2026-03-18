/*
 * XREFs of ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0248128
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C024857C (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C02489E4 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C0248A8C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEAAEXZ @ 0x1C0248FC0 (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEAAEXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C0248FD8 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(CPhysicalMonitorHandle *this)
{
  unsigned int v1; // r14d
  char *v2; // r12
  unsigned __int64 v3; // r15
  unsigned int v4; // edi
  signed int v6; // ebx
  unsigned __int8 v7; // r14
  unsigned int v8; // ecx
  unsigned int v9; // eax
  char *PoolWithTag; // rax
  char *v11; // r13
  size_t v12; // r8
  unsigned int v13; // r14d
  unsigned int v14; // edi
  char *v15; // rax
  void *v16; // rcx
  int v18; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v19[4]; // [rsp+28h] [rbp-48h] BYREF
  __int16 v20; // [rsp+2Ch] [rbp-44h]
  unsigned int v21; // [rsp+30h] [rbp-40h]
  unsigned int v22; // [rsp+34h] [rbp-3Ch]
  _BYTE v23[40]; // [rsp+38h] [rbp-38h] BYREF

  LOWORD(v1) = 0;
  v2 = 0LL;
  LODWORD(v3) = 0;
  v21 = 0;
  v4 = 0;
  while ( 1 )
  {
    *(_DWORD *)v19 = 15958865;
    v20 = (unsigned __int8)v1;
    v19[3] = BYTE1(v1);
    v6 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, -500000LL, v19, 6u);
    if ( v6 < 0 )
      break;
    memset(v23, 0, 0x26uLL);
    v6 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(this, -500000LL, v23, 0x26u);
    if ( v6 < 0 )
      break;
    if ( (v23[1] & 0x7Fu) < 3 || (v7 = (v23[1] & 0x7F) - 3, v7 > 0x20u) )
    {
      v6 = -1071774331;
      break;
    }
    if ( (v23[1] & 0x7F) != 3 )
    {
      v8 = -1;
      v18 = v7;
      v9 = v4 + v7;
      if ( v9 >= v4 )
        v8 = v4 + v7;
      v6 = v9 < v4 ? 0xC0000095 : 0;
      v22 = v8;
      if ( v9 < v4 )
        break;
      if ( (unsigned int)v3 <= v8 )
      {
        if ( (_DWORD)v3 )
        {
          v3 = 2LL * (unsigned int)v3;
          if ( v3 > 0xFFFFFFFF )
          {
            v6 = -1073741675;
            break;
          }
          v6 = 0;
        }
        else
        {
          LODWORD(v3) = 2048;
        }
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v3, 0x63326947u);
        v11 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v6 = -1073741801;
          break;
        }
        if ( v2 )
        {
          memmove(PoolWithTag, v2, v4);
          ExFreePoolWithTag(v2, 0x63326947u);
        }
        v2 = v11;
      }
      v12 = v7;
      v13 = v21;
      memmove(&v2[v21], &v23[5], v12);
      v1 = v18 + v13;
      v4 = v22;
      v21 = v1;
      if ( v1 <= 0xFFE0 )
        continue;
    }
    if ( v4 )
    {
      if ( (unsigned int)v3 > v4 )
      {
        v14 = v4 + 1;
        v2[v14 - 1] = 0;
        CAutoMutex::CAutoMutex((CAutoMutex *)&v18, (CPhysicalMonitorHandle *)((char *)this + 72));
        if ( !CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized(this) )
        {
          v15 = (char *)ExAllocatePoolWithTag(PagedPool, v14, 0x63326947u);
          *((_QWORD *)this + 10) = v15;
          if ( v15 )
          {
            v6 = RtlStringCbCopyA(v15, v14, v2);
            if ( v6 >= 0 )
            {
              *((_DWORD *)this + 22) = v14;
            }
            else
            {
              v16 = (void *)*((_QWORD *)this + 10);
              if ( v16 )
                ExFreePoolWithTag(v16, 0x63326947u);
              *((_QWORD *)this + 10) = 0LL;
              *((_DWORD *)this + 22) = 0;
            }
          }
          else
          {
            v6 = -1073741801;
          }
        }
        CAutoMutex::~CAutoMutex((CAutoMutex *)&v18);
      }
      else
      {
        v6 = -1071774328;
      }
    }
    else
    {
      v6 = -1071774329;
    }
    break;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x63326947u);
  return (unsigned int)v6;
}
