/*
 * XREFs of ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001AE4
 * Callers:
 *     _lambda_0d63f0eebaff590cd6794bb27eb1a224_::operator() @ 0x18003AF20 (_lambda_0d63f0eebaff590cd6794bb27eb1a224_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Deallocate(char *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char *v3; // rax

  if ( a2 > 0xFFFFFFFFFFFFFFFFuLL / a3 )
    goto $_Invalid_parameter$18;
  if ( a3 * a2 >= 0x1000 )
  {
    if ( ((unsigned __int8)a1 & 0x1F) == 0 )
    {
      v3 = (char *)*((_QWORD *)a1 - 1);
      if ( v3 < a1 )
      {
        a1 = (char *)(a1 - v3 - 8);
        if ( (unsigned __int64)a1 <= 0x1F )
        {
          a1 = v3;
          goto LABEL_7;
        }
      }
    }
$_Invalid_parameter$18:
    _o__invalid_parameter_noinfo_noreturn(a1, 0xFFFFFFFFFFFFFFFFuLL % a3);
    JUMPOUT(0x180001B33LL);
  }
LABEL_7:
  operator delete(a1);
}
