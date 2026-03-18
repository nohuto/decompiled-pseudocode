/*
 * XREFs of WmipIoControl @ 0x14051ACC0
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x14006E540 (IoIs32bitProcess.c)
 *     WmipReceiveNotifications @ 0x1400CDDCC (WmipReceiveNotifications.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     WmipOpenBlock @ 0x140501E4C (WmipOpenBlock.c)
 *     WmipQueryAllData @ 0x14051A7B0 (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x14051B0F8 (WmipQuerySetExecuteSI.c)
 *     WmipProbeWnodeMethodItem @ 0x14051BCF4 (WmipProbeWnodeMethodItem.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x14051BE28 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipEnumerateMofResources @ 0x140580F50 (WmipEnumerateMofResources.c)
 *     WmipProbeWnodeSingleInstance @ 0x140583B1C (WmipProbeWnodeSingleInstance.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     WmipEnumerateGuids @ 0x1407A3B04 (WmipEnumerateGuids.c)
 *     WmipQueryAllDataMultiple @ 0x1407A3F88 (WmipQueryAllDataMultiple.c)
 *     WmipQueryGuidInfo @ 0x1407A4254 (WmipQueryGuidInfo.c)
 *     WmipQuerySingleMultiple @ 0x1407A4320 (WmipQuerySingleMultiple.c)
 *     WmipProbeWnodeSingleItem @ 0x1407A4818 (WmipProbeWnodeSingleItem.c)
 *     WmipTranslateFileHandle @ 0x1407A4888 (WmipTranslateFileHandle.c)
 */

__int64 __fastcall WmipIoControl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // r15d
  struct _IRP *MasterIrp; // rdi
  unsigned int Length; // esi
  unsigned int LowPart; // r12d
  __int64 Options; // r14
  int v11; // ebx
  int SetExecuteSI; // eax
  __int64 v14; // rdx
  int Blink_high; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  ACCESS_MASK DesiredAccess[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  char v22; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v23[56]; // [rsp+80h] [rbp-88h] BYREF
  char v24; // [rsp+B8h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  DesiredAccess[0] = Length;
  if ( LowPart > 0x224158 )
  {
    if ( LowPart != 2244960 )
    {
      switch ( LowPart )
      {
        case 0x228008u:
          v11 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, 0LL);
          if ( v11 < 0 )
            goto LABEL_10;
          break;
        case 0x22800Cu:
          v11 = WmipProbeWnodeSingleItem(MasterIrp, (unsigned int)Options);
          if ( v11 < 0 )
            goto LABEL_10;
          break;
        case 0x228024u:
          v11 = WmipProbeWnodeMethodItem(MasterIrp, (unsigned int)Options, Length);
          if ( v11 >= 0 )
          {
LABEL_7:
            DesiredAccess[0] = Options;
            SetExecuteSI = WmipQuerySetExecuteSI(0LL, a2, 1, (__int64)MasterIrp, Length, (__int64)DesiredAccess);
LABEL_8:
            Length = DesiredAccess[0];
LABEL_9:
            v11 = SetExecuteSI;
          }
LABEL_10:
          if ( v11 == 259 || v11 == -1073741536 )
            return (unsigned int)v11;
          goto LABEL_12;
        case 0x22811Cu:
          if ( (_DWORD)Options == 22 )
          {
            SetExecuteSI = WmipTranslateFileHandle(MasterIrp, DesiredAccess);
            goto LABEL_8;
          }
LABEL_72:
          v11 = -1073741823;
          goto LABEL_12;
        default:
          switch ( LowPart )
          {
            case 0x22812Cu:
              if ( Length >= 0x38 && &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
              {
                v18 = *(_DWORD *)&MasterIrp->Type - 1;
                if ( v18 <= 0xFFE && &MasterIrp->Flags + 2 * v18 <= (ULONG *)((char *)MasterIrp + Options) )
                {
                  LOBYTE(a4) = 1;
                  SetExecuteSI = WmipQueryAllDataMultiple(
                                   0,
                                   0,
                                   (int)a2,
                                   a4,
                                   MasterIrp,
                                   Length,
                                   (__int64)MasterIrp,
                                   (__int64)DesiredAccess);
                  goto LABEL_8;
                }
              }
              break;
            case 0x228130u:
              if ( Length >= 0x38 )
              {
                v16 = (unsigned __int64)MasterIrp + Options;
                if ( &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
                {
                  v17 = (unsigned int)(*(_DWORD *)&MasterIrp->Type - 1);
                  if ( (unsigned int)v17 <= 0xFFE && (unsigned __int64)&MasterIrp->ThreadListEntry + 24 * v17 <= v16 )
                  {
                    LOBYTE(v16) = 1;
                    SetExecuteSI = WmipQuerySingleMultiple(
                                     (_DWORD)a2,
                                     v16,
                                     (_DWORD)MasterIrp,
                                     Length,
                                     (__int64)MasterIrp,
                                     *(_DWORD *)&MasterIrp->Type,
                                     0LL,
                                     0LL,
                                     (__int64)DesiredAccess);
                    goto LABEL_8;
                  }
                }
              }
              break;
            case 0x228144u:
              if ( (unsigned int)Options < 0x10
                || Length < 0x38
                || *(_DWORD *)&MasterIrp->Type > (unsigned int)(Options - 8) >> 3 )
              {
                v11 = -1073741808;
                goto LABEL_10;
              }
              SetExecuteSI = WmipReceiveNotifications((unsigned int *)MasterIrp, (int *)DesiredAccess, (__int64)a2);
              goto LABEL_8;
            default:
              goto LABEL_57;
          }
LABEL_69:
          v11 = -1073741811;
          goto LABEL_10;
      }
      DesiredAccess[0] = Options;
      SetExecuteSI = WmipQuerySetExecuteSI(0LL, a2, 1, (__int64)MasterIrp, Options, (__int64)DesiredAccess);
      Length = 0;
      goto LABEL_9;
    }
    goto LABEL_77;
  }
  switch ( LowPart )
  {
    case 0x224158u:
      if ( Length >= 0x10 )
      {
        SetExecuteSI = WmipEnumerateMofResources(MasterIrp, Length, DesiredAccess);
        goto LABEL_8;
      }
      goto LABEL_69;
    case 0x224000u:
      if ( Length >= 0x48 )
      {
        if ( (unsigned int)Options >= 0x30 )
        {
          Blink_high = HIDWORD(MasterIrp->ThreadListEntry.Blink);
          if ( (Blink_high & 1) != 0 && (_DWORD)Options == *(_DWORD *)&MasterIrp->Type && (Blink_high & 0xFFFFFF7E) == 0 )
          {
            SetExecuteSI = WmipQueryAllData(0LL, a2, 1, (__int64)MasterIrp, Length, DesiredAccess);
            goto LABEL_8;
          }
        }
        goto LABEL_72;
      }
      break;
    case 0x224004u:
      if ( Length >= 0x38 )
      {
        LOBYTE(a4) = 1;
        v11 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, a4);
        if ( v11 < 0 )
          goto LABEL_10;
        goto LABEL_7;
      }
      break;
    case 0x224108u:
LABEL_24:
      v11 = WmipProbeWmiOpenGuidBlock(
              (unsigned int)v23,
              (unsigned int)&v22,
              (unsigned int)&v24,
              (unsigned int)DesiredAccess,
              (__int64)MasterIrp,
              Options,
              Length);
      if ( v11 >= 0 )
      {
        LOBYTE(v14) = 1;
        v11 = WmipOpenBlock(LowPart, v14, (__int64)v23, DesiredAccess[0], &Object);
        if ( v11 >= 0 )
        {
          v11 = ObOpenObjectByPointer(Object, 0, 0LL, DesiredAccess[0], WmipGuidObjectType, 1, &Handle);
          if ( v11 >= 0 )
          {
            if ( IoIs32bitProcess(0LL) )
              LODWORD(MasterIrp->MdlAddress) = (_DWORD)Handle;
            else
              *(_QWORD *)&MasterIrp->Flags = Handle;
          }
          ObfDereferenceObject(Object);
        }
      }
      goto LABEL_10;
    case 0x224124u:
      if ( Length >= 4 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
        Length = 4;
        v11 = 0;
        goto LABEL_12;
      }
      break;
    case 0x224134u:
LABEL_77:
      if ( Length >= 8 )
      {
        SetExecuteSI = WmipEnumerateGuids(LowPart, MasterIrp, Length, DesiredAccess);
        goto LABEL_8;
      }
      break;
    case 0x224138u:
      if ( Length >= 0x10 )
      {
        SetExecuteSI = WmipQueryGuidInfo(MasterIrp);
        Length = 16;
        goto LABEL_9;
      }
      break;
    case 0x22413Cu:
    case 0x224140u:
      goto LABEL_24;
    default:
LABEL_57:
      v11 = -1073741808;
      goto LABEL_12;
  }
  v11 = -1073741789;
LABEL_12:
  a2->IoStatus.Status = v11;
  if ( v11 >= 0 )
    v5 = Length;
  a2->IoStatus.Information = v5;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
