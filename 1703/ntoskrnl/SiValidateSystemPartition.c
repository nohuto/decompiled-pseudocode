/*
 * XREFs of SiValidateSystemPartition @ 0x14012FD6C
 * Callers:
 *     SiGetFirmwareBootDeviceName @ 0x140569680 (SiGetFirmwareBootDeviceName.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SiGetDiskPartitionInformation @ 0x140569A08 (SiGetDiskPartitionInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140738EE8 (SiIssueSynchronousIoctl.c)
 */

__int64 __fastcall SiValidateSystemPartition(PCWSTR SourceString, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  signed int DiskPartitionInformation; // edx
  __int64 v8; // rax
  _DWORD OutputBuffer[8]; // [rsp+30h] [rbp-81h] BYREF
  __int64 v10; // [rsp+50h] [rbp-61h]
  __int64 v11; // [rsp+58h] [rbp-59h]
  __int64 v12; // [rsp+C0h] [rbp+Fh]
  int v13; // [rsp+C8h] [rbp+17h]
  _BYTE v14[40]; // [rsp+D0h] [rbp+1Fh] BYREF

  DiskPartitionInformation = SiGetDiskPartitionInformation(SourceString, OutputBuffer);
  if ( DiskPartitionInformation < 0 )
    return (unsigned int)DiskPartitionInformation;
  DiskPartitionInformation = -1073741823;
  if ( OutputBuffer[0] == 1 )
  {
    v8 = v10 - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
    if ( v10 == *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1 )
      v8 = v11 - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
    if ( !v8 )
    {
      DiskPartitionInformation = 0;
LABEL_6:
      if ( a5 )
      {
        v13 = 0;
        memset(v14, 0, sizeof(v14));
        v12 = 0LL;
        DiskPartitionInformation = SiIssueSynchronousIoctl(SourceString, v14, 0x28u);
        if ( DiskPartitionInformation >= 0 )
        {
          if ( v14[10] )
            return (unsigned int)-1073741436;
        }
      }
    }
  }
  else
  {
    if ( !OutputBuffer[0] )
      DiskPartitionInformation = BYTE1(v10) == 0 ? 0xC0000001 : 0;
    if ( DiskPartitionInformation >= 0 )
      goto LABEL_6;
  }
  return (unsigned int)DiskPartitionInformation;
}
