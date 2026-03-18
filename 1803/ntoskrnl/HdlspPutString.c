/*
 * XREFs of HdlspPutString @ 0x140839D8C
 * Callers:
 *     HdlspDispatch @ 0x140838E10 (HdlspDispatch.c)
 *     HdlspProcessDumpCommand @ 0x140839A68 (HdlspProcessDumpCommand.c)
 *     HdlspPutMore @ 0x140839CEC (HdlspPutMore.c)
 * Callees:
 *     HdlspUTF8Encode @ 0x1402B77C0 (HdlspUTF8Encode.c)
 *     HdlspSendStringAtBaud @ 0x14083A070 (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspPutString(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rbx
  PKSPIN_LOCK v2; // r10
  unsigned __int8 *v3; // r9
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // cl
  PKSPIN_LOCK v6; // rcx
  __int64 v8; // rcx
  unsigned __int8 *v9; // rdx
  __int16 v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+32h] [rbp+Ah]

  v1 = a1;
  v2 = HeadlessGlobals + 3;
  v3 = (unsigned __int8 *)HeadlessGlobals[3];
  if ( *a1 )
  {
    while ( 1 )
    {
      v4 = (unsigned __int8 *)(*v2 + 79);
      if ( v3 < v4 )
        break;
      *v4 = 0;
      HdlspSendStringAtBaud(*v2);
      v2 = HeadlessGlobals + 3;
      v3 = (unsigned __int8 *)HeadlessGlobals[3];
LABEL_19:
      if ( !*v1 )
        goto LABEL_20;
    }
    v5 = *v1;
    if ( (*v1 & 0x80u) == 0 )
      goto LABEL_17;
    if ( v5 > 0xC0u )
    {
      if ( v5 == 196 )
      {
        v5 = 45;
        goto LABEL_34;
      }
      if ( v5 <= 0xC7u )
        goto LABEL_34;
      if ( v5 > 0xC9u )
      {
        if ( v5 == 205 )
        {
          v5 = 61;
          goto LABEL_17;
        }
        if ( v5 <= 0xD8u )
          goto LABEL_34;
        if ( v5 > 0xDAu )
        {
          if ( v5 == 219 )
            goto LABEL_31;
          if ( (unsigned int)v5 - 220 > 3 )
            goto LABEL_34;
          goto LABEL_30;
        }
      }
    }
    else if ( v5 < 0xBFu )
    {
      if ( v5 < 0xA9u )
        goto LABEL_34;
      if ( v5 > 0xAAu )
      {
        if ( v5 == 176 )
          goto LABEL_21;
        if ( v5 != 177 )
        {
          if ( v5 != 178 )
          {
            if ( v5 != 179 && v5 != 186 )
            {
              if ( v5 > 0xBAu && v5 <= 0xBCu )
                goto LABEL_16;
LABEL_34:
              if ( (v5 & 0x80u) != 0 )
              {
                v10 = 0;
                v11 = 0;
                HdlspUTF8Encode(HdlpsPcAnsiToUnicode[v5 & 0x7F], &v10);
                v8 = 3LL;
                v9 = (unsigned __int8 *)&v10;
                do
                {
                  if ( *v9 )
                    *v3++ = *v9;
                  ++v9;
                  --v8;
                }
                while ( v8 );
                goto LABEL_18;
              }
LABEL_17:
              *v3++ = v5;
LABEL_18:
              ++v1;
              goto LABEL_19;
            }
LABEL_21:
            v5 = 124;
            goto LABEL_17;
          }
LABEL_31:
          v5 = 35;
          goto LABEL_17;
        }
LABEL_30:
        v5 = 37;
        goto LABEL_17;
      }
    }
LABEL_16:
    v5 = 43;
    goto LABEL_17;
  }
LABEL_20:
  v6 = HeadlessGlobals;
  *v3 = 0;
  return HdlspSendStringAtBaud(v6[3]);
}
