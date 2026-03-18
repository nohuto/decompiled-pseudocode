/*
 * XREFs of UsbhBuildUnknownIds @ 0x1C0053058
 * Callers:
 *     UsbhSetEnumerationFailed @ 0x1C0052DA4 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhMakeId @ 0x1C0022100 (UsbhMakeId.c)
 *     UsbhFreeID @ 0x1C0028A88 (UsbhFreeID.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

void __fastcall UsbhBuildUnknownIds(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _DWORD *v3; // rbx
  wchar_t *v4; // rdi
  unsigned __int16 v5; // si
  char *Id; // rbp
  char *v7; // r15
  _QWORD *PoolWithTag; // rdi
  _QWORD *v9; // rax
  POOL_TYPE v10; // ecx
  int v11; // r12d
  char *v12; // rax
  char *v13; // r14
  _WORD *v14; // rdx
  int v15; // [rsp+90h] [rbp+18h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF

  Log(a1, 4096, 1970161988, a2, 0LL);
  v3 = PdoExt(v2);
  switch ( v3[703] )
  {
    case 0x40010000:
      v4 = L"USB\\DEVICE_DESCRIPTOR_FAILURE";
      v5 = 2;
      break;
    case 0x40010001:
      v4 = L"USB\\SET_ADDRESS_FAILURE";
      v5 = 4;
      break;
    case 0x40010002:
      v4 = L"USB\\RESET_FAILURE";
      v5 = 1;
      break;
    case 0x40010004:
      v4 = L"USB\\CONFIGURATION_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = 6;
      break;
    case 0x40010005:
      v4 = L"USB\\DEVICE_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = 5;
      break;
    case 0x40010007:
      v4 = L"USB\\CONFIG_DESCRIPTOR_FAILURE";
      v5 = 3;
      break;
    default:
      return;
  }
  v16 = 0;
  v15 = 0;
  Id = UsbhMakeId(0, v4, 0LL, &v16, 2u, 0, 0, 0LL);
  if ( Id )
  {
    v7 = UsbhMakeId(0, v4, 0LL, &v15, 2u, 0, 0, 0LL);
    if ( v7 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
      if ( PoolWithTag )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        PoolWithTag[2] = 0LL;
        v9 = PoolWithTag;
        *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\VID_nnnn";
        for ( PoolWithTag[2] = *(_QWORD *)L"nnnn"; *(_WORD *)v9 != 110; v9 = (_QWORD *)((char *)v9 + 2) )
          ;
        v10 = ExDefaultNonPagedPoolType;
        v11 = 46;
        *(_DWORD *)v9 = 3145776;
        *((_DWORD *)v9 + 1) = 3145776;
        v12 = (char *)ExAllocatePoolWithTag(v10, 0x2EuLL, 0x42554855u);
        v13 = v12;
        if ( v12 )
        {
          memset(v12, 0, 0x2EuLL);
          v14 = v13 + 24;
          *(_OWORD *)v13 = *(_OWORD *)PoolWithTag;
          *((_QWORD *)v13 + 2) = PoolWithTag[2];
          *(_OWORD *)(v13 + 24) = *(_OWORD *)L"&PID_nnnn";
          for ( *((_WORD *)v13 + 20) = aPidNnnn[8]; *v14 != 110; ++v14 )
            ;
          *v14 = (unsigned __int8)Nibble[(unsigned __int64)v5 >> 12];
          v14[1] = (unsigned __int8)Nibble[((unsigned __int64)v5 >> 8) & 0xF];
          v14[2] = (unsigned __int8)Nibble[((unsigned __int64)v5 >> 4) & 0xF];
          v14[3] = (unsigned __int8)Nibble[v5 & 0xF];
        }
        else
        {
          v11 = 0;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        if ( v13 )
        {
          UsbhFreeID((__int64)(v3 + 526));
          v3[527] = v15;
          *((_QWORD *)v3 + 264) = v7;
          UsbhFreeID((__int64)(v3 + 522));
          v3[523] = v16;
          *((_QWORD *)v3 + 262) = Id;
          UsbhFreeID((__int64)(v3 + 518));
          *((_QWORD *)v3 + 260) = v13;
          v3[519] = v11;
        }
        else
        {
          ExFreePoolWithTag(Id, 0);
          ExFreePoolWithTag(v7, 0);
        }
      }
      else
      {
        ExFreePoolWithTag(Id, 0);
        ExFreePoolWithTag(v7, 0);
      }
    }
    else
    {
      ExFreePoolWithTag(Id, 0);
    }
  }
}
