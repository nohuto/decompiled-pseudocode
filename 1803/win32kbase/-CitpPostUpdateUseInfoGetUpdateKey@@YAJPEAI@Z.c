/*
 * XREFs of ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C0162714
 * Callers:
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0162950 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C01621B4 (-CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoGetUpdateKey(unsigned int *a1)
{
  unsigned __int16 *v2; // rdi
  NTSTATUS v3; // eax
  const char *v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  int String; // eax
  __int64 v9; // r8
  __int64 v10; // r8
  unsigned __int8 *v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v25; // [rsp+88h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  v25 = 0LL;
  v2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = 4865;
    v7 = (unsigned int)v3;
LABEL_3:
    CitpLogFailureWorker(v7, v4, v6);
    goto LABEL_30;
  }
  String = CitpParameterGetString(KeyHandle, (const unsigned __int16 *)v4, &v25);
  v5 = String;
  if ( String < 0 )
  {
    CitpLogFailureWorker((unsigned int)String, v4, 0x1308u);
    v2 = v25;
    goto LABEL_30;
  }
  v2 = v25;
  v9 = -1LL;
  do
    ++v9;
  while ( v25[v9] );
  if ( !v9 )
  {
    v5 = -1073739509;
    v6 = 4880;
    v7 = 3221227787LL;
    goto LABEL_3;
  }
  v10 = 2 * v9;
  v11 = (unsigned __int8 *)v25;
  v12 = 314159LL;
  if ( v10 >= 8 )
  {
    v13 = (unsigned __int64)v10 >> 3;
    v10 -= 8 * ((unsigned __int64)v10 >> 3);
    do
    {
      v14 = v11[7];
      v15 = 37
          * (v11[6]
           + 37 * (v11[5] + 37 * (v11[4] + 37 * (v11[3] + 37 * (v11[2] + 37 * (v11[1] + 37 * (*v11 + 37 * v12)))))));
      v11 += 8;
      v12 = v14 + v15;
      --v13;
    }
    while ( v13 );
  }
  if ( v10 >= 1 && v10 <= 7 )
  {
    v16 = v10 - 1;
    if ( !v16 )
    {
LABEL_28:
      LODWORD(v12) = *v11 + 37 * v12;
      goto LABEL_29;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
LABEL_27:
      LODWORD(v12) = *v11++ + 37 * v12;
      goto LABEL_28;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
LABEL_26:
      LODWORD(v12) = *v11++ + 37 * v12;
      goto LABEL_27;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
LABEL_25:
      LODWORD(v12) = *v11++ + 37 * v12;
      goto LABEL_26;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
LABEL_24:
      LODWORD(v12) = *v11++ + 37 * v12;
      goto LABEL_25;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
LABEL_23:
      LODWORD(v12) = *v11++ + 37 * v12;
      goto LABEL_24;
    }
    if ( v21 == 1 )
    {
      LODWORD(v12) = *v11++ + 37 * v12;
      goto LABEL_23;
    }
  }
LABEL_29:
  *a1 = v12;
  v5 = 0;
LABEL_30:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    Win32FreePool((__int64)v2);
  return v5;
}
