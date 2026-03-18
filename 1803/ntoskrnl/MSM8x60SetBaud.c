/*
 * XREFs of MSM8x60SetBaud @ 0x1402CE160
 * Callers:
 *     MSM8x60InitializePort @ 0x1402CDEA0 (MSM8x60InitializePort.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall MSM8x60SetBaud(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char result; // al

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *a1;
    if ( v5 )
    {
      if ( a2 > 0x1C20 )
      {
        switch ( a2 )
        {
          case 0x2580u:
            v4 = 153LL;
            goto LABEL_34;
          case 0x3840u:
            v4 = 170LL;
            goto LABEL_34;
          case 0x4B00u:
            v4 = 187LL;
            goto LABEL_34;
          case 0x7080u:
            v4 = 204LL;
            goto LABEL_34;
          case 0x9600u:
            v4 = 221LL;
            goto LABEL_34;
          case 0xE100u:
            v4 = 238LL;
            goto LABEL_34;
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0x1C20u:
            v4 = 136LL;
            goto LABEL_34;
          case 0x4Bu:
LABEL_34:
            ((void (__fastcall *)(__int64, __int64))off_140399438[0])(v5 + 8, v4);
            result = 1;
            *((_DWORD *)a1 + 2) = a2;
            return result;
          case 0x96u:
            v4 = 17LL;
            goto LABEL_34;
          case 0x12Cu:
            v4 = 34LL;
            goto LABEL_34;
          case 0x258u:
            v4 = 51LL;
            goto LABEL_34;
          case 0x4B0u:
            v4 = 68LL;
            goto LABEL_34;
          case 0x960u:
            v4 = 85LL;
            goto LABEL_34;
          case 0xE10u:
            v4 = 102LL;
            goto LABEL_34;
          case 0x12C0u:
            v4 = 119LL;
            goto LABEL_34;
        }
      }
      v4 = 255LL;
      goto LABEL_34;
    }
  }
  return 0;
}
