/*
 * XREFs of ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0249B18
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0249F68 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C024A3E0 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C024A488 (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 *     ?IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEAAEXZ @ 0x1C024A9C4 (-IsDDCCICapabilitiesStringInitialized@CPhysicalMonitorHandle@@AEAAEXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C024A9DC (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(CPhysicalMonitorHandle *this)
{
  unsigned int v1; // r13d
  char *v2; // r15
  unsigned int v3; // r12d
  unsigned int v5; // edi
  signed int v6; // ebx
  unsigned __int8 v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char *PoolWithTag; // rax
  unsigned int v13; // edi
  char *v14; // rax
  void *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v18[4]; // [rsp+28h] [rbp-48h] BYREF
  __int16 v19; // [rsp+2Ch] [rbp-44h]
  char *v20; // [rsp+30h] [rbp-40h]
  _BYTE v21[40]; // [rsp+38h] [rbp-38h] BYREF

  v1 = 0;
  v2 = 0LL;
  v3 = 0;
  v5 = 0;
  while ( 1 )
  {
    *(_DWORD *)v18 = 15958865;
    v19 = (unsigned __int8)v1;
    v18[3] = BYTE1(v1);
    v6 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, -500000LL, v18, 6u);
    if ( v6 < 0 )
      break;
    memset(v21, 0, 0x26uLL);
    v6 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(this, -500000LL, v21, 0x26u);
    if ( v6 < 0 )
      break;
    if ( (v21[1] & 0x7Fu) < 3 || (v7 = (v21[1] & 0x7F) - 3, v7 > 0x20u) )
    {
      v6 = -1071774331;
      break;
    }
    if ( (v21[1] & 0x7F) != 3 )
    {
      v8 = v5 + v7;
      v9 = -1;
      if ( v8 >= v5 )
        v9 = v5 + v7;
      v6 = v8 < v5 ? 0xC0000095 : 0;
      v17 = v9;
      if ( v8 < v5 )
        break;
      if ( v3 <= v9 )
      {
        if ( v3 )
        {
          v10 = v3;
          v3 = -1;
          v11 = 2 * v10;
          if ( v11 <= 0xFFFFFFFF )
            v3 = v11;
          v6 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v11 > 0xFFFFFFFF )
            break;
        }
        else
        {
          v3 = 2048;
        }
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v3, 0x63326947u);
        v20 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v6 = -1073741801;
          break;
        }
        if ( v2 )
        {
          memmove(PoolWithTag, v2, v5);
          ExFreePoolWithTag(v2, 0x63326947u);
          PoolWithTag = v20;
        }
        v2 = PoolWithTag;
      }
      memmove(&v2[v1], &v21[5], v7);
      v5 = v17;
      v1 += v7;
      if ( v1 <= 0xFFE0 )
        continue;
    }
    if ( v5 )
    {
      if ( v3 > v5 )
      {
        v13 = v5 + 1;
        v2[v13 - 1] = 0;
        CAutoMutex::CAutoMutex((CAutoMutex *)&v17, (CPhysicalMonitorHandle *)((char *)this + 72));
        if ( !CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized(this) )
        {
          v14 = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x63326947u);
          *((_QWORD *)this + 10) = v14;
          if ( v14 )
          {
            v6 = RtlStringCbCopyA(v14, v13, v2);
            if ( v6 >= 0 )
            {
              *((_DWORD *)this + 22) = v13;
            }
            else
            {
              v15 = (void *)*((_QWORD *)this + 10);
              if ( v15 )
                ExFreePoolWithTag(v15, 0x63326947u);
              *((_QWORD *)this + 10) = 0LL;
              *((_DWORD *)this + 22) = 0;
            }
          }
          else
          {
            v6 = -1073741801;
          }
        }
        CAutoMutex::~CAutoMutex((CAutoMutex *)&v17);
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
