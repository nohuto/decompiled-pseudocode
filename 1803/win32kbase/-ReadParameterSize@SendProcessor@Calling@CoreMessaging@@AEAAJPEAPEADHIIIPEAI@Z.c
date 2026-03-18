/*
 * XREFs of ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C01695DC
 * Callers:
 *     ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1C01692C0 (-PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z.c)
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C0169400 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 * Callees:
 *     ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1C01692C0 (-PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z.c)
 *     ?PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIHPEAI@Z @ 0x1C016937C (-PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIHPEAI@Z.c)
 *     ?PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z @ 0x1C0169594 (-PrepareStruct@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXHPEAI@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0169C24 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

int __fastcall CoreMessaging::Calling::SendProcessor::ReadParameterSize(
        CoreMessaging::Calling::SendProcessor *this,
        char **a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int8 *v7; // rax
  unsigned int v8; // r10d
  unsigned int v9; // r10d
  unsigned int v10; // r10d
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  unsigned int v13; // r10d
  unsigned int v14; // r10d
  unsigned int v15; // r10d
  int result; // eax
  unsigned int v17; // r10d
  unsigned int v18; // r10d
  unsigned int v19; // r10d
  unsigned int v20; // r10d
  unsigned int v21; // r10d
  unsigned int v22; // r10d
  const void *v23; // r10
  unsigned int v24; // edx
  char *v25; // rax
  const void *v26; // rdx
  const unsigned __int16 *v27; // rdx

  *a7 = 0;
  v7 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v8 = *v7;
  *((_QWORD *)this + 1) = v7 + 1;
  if ( v8 <= 9 )
  {
    if ( v8 == 9 )
      goto LABEL_16;
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_45;
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_16;
      v12 = v11 - 1;
      if ( !v12 )
      {
LABEL_11:
        if ( !a3 )
          *a2 += 8;
        *a7 = 8;
        return 0;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 == 1 )
              goto LABEL_11;
LABEL_26:
            result = -2147024809;
            *((_DWORD *)this + 30) = 205;
            return result;
          }
LABEL_16:
          if ( !a3 )
            *a2 += 8;
          *a7 = 4;
          return 0;
        }
LABEL_45:
        if ( !a3 )
          *a2 += 8;
        *a7 = 2;
        return 0;
      }
    }
    goto LABEL_42;
  }
  v17 = v8 - 10;
  if ( !v17 )
    goto LABEL_11;
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_45;
  v19 = v18 - 1;
  if ( !v19 )
  {
LABEL_42:
    if ( !a3 )
      *a2 += 8;
    *a7 = 1;
    return 0;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x368uLL);
      if ( v22 != 1 )
        goto LABEL_26;
      if ( a3 )
      {
        v23 = 0LL;
        v24 = 0;
      }
      else
      {
        *a2 += 8;
        v23 = (const void *)*((_QWORD *)*a2 - 1);
        v25 = *a2 + 8;
        *a2 = v25;
        v24 = *((_DWORD *)v25 - 2);
      }
      result = CoreMessaging::Calling::SendProcessor::PrepareArray(this, v23, v24, a4, a5, a6, a3, a7);
    }
    else
    {
      if ( a3 )
      {
        v26 = 0LL;
      }
      else
      {
        *a2 += 8;
        v26 = (const void *)*((_QWORD *)*a2 - 1);
      }
      result = CoreMessaging::Calling::SendProcessor::PrepareStruct(this, v26, a3, a7);
    }
  }
  else
  {
    if ( a3 )
    {
      v27 = 0LL;
    }
    else
    {
      *a2 += 8;
      v27 = (const unsigned __int16 *)*((_QWORD *)*a2 - 1);
    }
    result = CoreMessaging::Calling::SendProcessor::PrepareLPCWSTR(this, v27, a4, a3, a7);
  }
  if ( result >= 0 )
    return 0;
  return result;
}
